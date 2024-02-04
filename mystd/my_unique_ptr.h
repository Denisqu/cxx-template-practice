#ifndef __MY_UNIQUE_PTR_H__
#define __MY_UNIQUE_PTR_H__

namespace mystd {

template <typename T> class unique_ptr {
public:
  explicit unique_ptr(T *ptr) noexcept { pData = ptr; };

  unique_ptr(unique_ptr<T> &&other) noexcept {
    pData = other.pData;
    other.pData = nullptr;
  }

  unique_ptr<T> &operator=(unique_ptr<T> &&rhs) noexcept {
    if (this == rhs)
      return *this;

    delete pData;

    pData = rhs.pData;
    rhs.pData = nullptr;
    return *this;
  }

  T &operator*() const { return *pData; }

  ~unique_ptr() {
      delete pData;
  }

  unique_ptr &operator=(mystd::unique_ptr<T> &rhs) = delete;
  unique_ptr(mystd::unique_ptr<T> &other) = delete;

private:
  T *pData = nullptr;

};
} // namespace mystd
#endif // __MY_UNIQUE_PTR_H__
