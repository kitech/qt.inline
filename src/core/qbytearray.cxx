// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qbytearray.h
// dst-file: /src/core/qbytearray.cxx
//

// header block begin =>
#include <qbytearray.h>
#include <qstring.h>

extern "C" {

int QByteRef_Class_Size()
{
  return sizeof(QByteRef);
}

int QByteArray_Class_Size()
{
  return sizeof(QByteArray);
}

// ~QByteArray()
void dedtor_ZN10QByteArrayD0Ev(QByteArray* that)
{
  QByteArray* rthis = (QByteArray*)that;
  delete rthis;
}

// QByteArray(class QByteArray &&)
QByteArray* dector_ZN10QByteArrayC1EOS_(QByteArray && other)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(other);
  return rthis;
}

// QByteArray()
QByteArray* dector_ZN10QByteArrayC1Ev()
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray();
  return rthis;
}

// QByteArray(int, char)
QByteArray* dector_ZN10QByteArrayC1Eic(int size, char c)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(size, c);
  return rthis;
}

// QByteArray(const char *, int)
QByteArray* dector_ZN10QByteArrayC1EPKci(const char * arg1, int size)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(arg1, size);
  return rthis;
}

// QByteArray(const class QByteArray &)
QByteArray* dector_ZN10QByteArrayC1ERKS_(const QByteArray & arg1)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(arg1);
  return rthis;
}

// QByteArray(int, Qt::Initialization)
QByteArray* dector_ZN10QByteArrayC1EiN2Qt14InitializationE(int size, Qt::Initialization arg2)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(size, arg2);
  return rthis;
}

// QByteArray(struct QByteArrayDataPtr)
QByteArray* dector_ZN10QByteArrayC1E17QByteArrayDataPtr(QByteArrayDataPtr dd)
{
  // static_assert(sizeof(QByteArray) == 32, "tyszerr");
  QByteArray* rthis = new QByteArray(dd);
  return rthis;
}

  // proto:  QByteArray QByteArray::toLower();
QByteArray* demth_ZNKR10QByteArray7toLowerEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->toLower();
  return new QByteArray(recret);
}

  // proto:  void QByteArray::push_front(const QByteArray & a);
void demth_ZN10QByteArray10push_frontERKS_(void *that, const QByteArray & a)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->push_front(a);
}

  // proto:  QByteArray & QByteArray::replace(const char * before, const char * after);
QByteArray * demth_ZN10QByteArray7replaceEPKcS1_(void *that, const char * before, const char * after)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->replace(before, after);
}

  // proto:  void QByteArray::~QByteArray();
void demth_ZN10QByteArrayD0Ev(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->~QByteArray();
}

  // proto:  void QByteArray::QByteArray(QByteArray && other);
void demth_ZN10QByteArrayC1EOS_(void *that, QByteArray && other)
{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray(other);
}

  // proto:  void QByteArray::QByteArray();
void demth_ZN10QByteArrayC1Ev(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray();
}

  // proto:  bool QByteArray::isEmpty();
bool demth_ZNK10QByteArray7isEmptyEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->isEmpty();
}


    QByteArray * _ZN10QByteArray6insertEiRK7QString(void *that, int i, const QString & s)
    {

        QByteArray *cthat = (QByteArray *)that;
        return &cthat->insert(i, s);
    }

  // proto:  QByteArray & QByteArray::insert(int i, const QString & s);
QByteArray * demth_ZN10QByteArray6insertEiRK7QString(void *that, int i, const QString & s)
{

    QByteArray *cthat = (QByteArray *)that;
  return &cthat->insert(i, s);
}

    void abcccccccccc()
    {
        QByteArray ba;
        ba.insert(0, QString("123"));
    }

  // proto:  int QByteArray::lastIndexOf(const QString & s, int from);
int demth_ZNK10QByteArray11lastIndexOfERK7QStringi(void *that, const QString & s, int from)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->lastIndexOf(s, from);
}

  // proto:  QByteArray QByteArray::toUpper();
QByteArray* demth_ZNO10QByteArray7toUpperEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->toUpper();
  return new QByteArray(recret);
}

  // proto: static QByteArray QByteArray::fromStdString(const std::string & s);
QByteArray* demth_ZN10QByteArray13fromStdStringERKi(void *that, const std::string & s)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->fromStdString(s);
  return new QByteArray(recret);
}

  // proto:  void QByteArray::reserve(int size);
void demth_ZN10QByteArray7reserveEi(void *that, int size)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->reserve(size);
}

  // proto:  bool QByteArray::contains(char c);
bool demth_ZNK10QByteArray8containsEc(void *that, char c)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->contains(c);
}

  // proto:  char * QByteArray::data();
char * demth_ZN10QByteArray4dataEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->data();
}

  // proto:  int QByteArray::capacity();
int demth_ZNK10QByteArray8capacityEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->capacity();
}

  // proto:  int QByteArray::count();
int demth_ZNK10QByteArray5countEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->count();
}

  // proto:  QByteArray QByteArray::trimmed();
QByteArray* demth_ZNO10QByteArray7trimmedEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->trimmed();
  return new QByteArray(recret);
}

  // proto:  bool QByteArray::contains(const char * a);
bool demth_ZNK10QByteArray8containsEPKc(void *that, const char * a)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->contains(a);
}

  // proto:  void QByteArray::squeeze();
void demth_ZN10QByteArray7squeezeEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->squeeze();
}

  // proto:  const char * QByteArray::data();
const char * demth_ZNK10QByteArray4dataEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->data();
}

  // proto:  int QByteArray::indexOf(const QString & s, int from);
int demth_ZNK10QByteArray7indexOfERK7QStringi(void *that, const QString & s, int from)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->indexOf(s, from);
}

  // proto:  QByteArray QByteArray::simplified();
QByteArray* demth_ZNKR10QByteArray10simplifiedEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->simplified();
  return new QByteArray(recret);
}

  // proto:  void QByteArray::detach();
void demth_ZN10QByteArray6detachEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->detach();
}

  // proto:  QByteArray & QByteArray::setNum(float , char f, int prec);
QByteArray * demth_ZN10QByteArray6setNumEfci(void *that, float arg1, char f, int prec)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->setNum(arg1, f, prec);
}

  // proto:  void QByteArray::push_back(char c);
void demth_ZN10QByteArray9push_backEc(void *that, char c)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->push_back(c);
}

  // proto:  bool QByteArray::isSharedWith(const QByteArray & other);
bool demth_ZNK10QByteArray12isSharedWithERKS_(void *that, const QByteArray & other)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->isSharedWith(other);
}

  // proto:  int QByteArray::size();
int demth_ZNK10QByteArray4sizeEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->size();
}

  // proto:  void QByteArray::push_front(char c);
void demth_ZN10QByteArray10push_frontEc(void *that, char c)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->push_front(c);
}

  // proto:  QByteArray QByteArray::toLower();
QByteArray* demth_ZNO10QByteArray7toLowerEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->toLower();
  return new QByteArray(recret);
}

  // proto:  QByteArray & QByteArray::setNum(short , int base);
QByteArray * demth_ZN10QByteArray6setNumEsi(void *that, short arg1, int base)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->setNum(arg1, base);
}

  // proto:  QByteArray & QByteArray::replace(char c, const QString & after);
QByteArray * demth_ZN10QByteArray7replaceEcRK7QString(void *that, char c, const QString & after)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->replace(c, after);
}

  // proto:  void QByteArray::push_front(const char * c);
void demth_ZN10QByteArray10push_frontEPKc(void *that, const char * c)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->push_front(c);
}

  // proto:  const char * QByteArray::constData();
const char * demth_ZNK10QByteArray9constDataEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->constData();
}

  // proto:  void QByteArray::QByteArray(const QByteArray & );
void demth_ZN10QByteArrayC1ERKS_(void *that, const QByteArray & arg1)
{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray(arg1);
}

  // proto:  int QByteArray::length();
int demth_ZNK10QByteArray6lengthEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->length();
}

  // proto:  char QByteArray::at(int i);
char demth_ZNK10QByteArray2atEi(void *that, int i)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->at(i);
}

  // proto:  QByteArray & QByteArray::setNum(ushort , int base);
QByteArray * demth_ZN10QByteArray6setNumEti(void *that, unsigned short arg1, int base)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->setNum(arg1, base);
}

  // proto:  void QByteArray::swap(QByteArray & other);
void demth_ZN10QByteArray4swapERS_(void *that, QByteArray & other)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->swap(other);
}

  // proto:  QByteArray & QByteArray::replace(const QString & before, const char * after);
QByteArray * demth_ZN10QByteArray7replaceERK7QStringPKc(void *that, const QString & before, const char * after)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->replace(before, after);
}

  // proto:  QByteArray QByteArray::trimmed();
QByteArray* demth_ZNKR10QByteArray7trimmedEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->trimmed();
  return new QByteArray(recret);
}

  // proto:  QByteArray & QByteArray::replace(char before, const char * after);
QByteArray * demth_ZN10QByteArray7replaceEcPKc(void *that, char before, const char * after)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->replace(before, after);
}

  // proto:  QByteArray & QByteArray::append(const QString & s);
QByteArray * demth_ZN10QByteArray6appendERK7QString(void *that, const QString & s)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->append(s);
}

  // proto:  QByteArray QByteArray::toUpper();
QByteArray* demth_ZNKR10QByteArray7toUpperEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->toUpper();
  return new QByteArray(recret);
}

  // proto:  void QByteArray::push_back(const QByteArray & a);
void demth_ZN10QByteArray9push_backERKS_(void *that, const QByteArray & a)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->push_back(a);
}

  // proto:  bool QByteArray::isDetached();
bool demth_ZNK10QByteArray10isDetachedEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->isDetached();
}

  // proto:  QByteArray & QByteArray::replace(const QByteArray & before, const char * after);
QByteArray * demth_ZN10QByteArray7replaceERKS_PKc(void *that, const QByteArray & before, const char * after)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->replace(before, after);
}

  // proto:  QByteArray & QByteArray::replace(const QString & before, const QByteArray & after);
QByteArray * demth_ZN10QByteArray7replaceERK7QStringRKS_(void *that, const QString & before, const QByteArray & after)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->replace(before, after);
}

  // proto:  QByteArray & QByteArray::setNum(uint , int base);
QByteArray * demth_ZN10QByteArray6setNumEji(void *that, unsigned int arg1, int base)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->setNum(arg1, base);
}

  // proto:  QByteArray & QByteArray::setNum(int , int base);
QByteArray * demth_ZN10QByteArray6setNumEii(void *that, int arg1, int base)
{
  QByteArray *cthat = (QByteArray *)that;
  return &cthat->setNum(arg1, base);
}

  // proto:  void QByteArray::push_back(const char * c);
void demth_ZN10QByteArray9push_backEPKc(void *that, const char * c)
{
  QByteArray *cthat = (QByteArray *)that;
   cthat->push_back(c);
}

  // proto:  void QByteArray::QByteArray(QByteArrayDataPtr dd);
void demth_ZN10QByteArrayC1E17QByteArrayDataPtr(void *that, QByteArrayDataPtr dd)
{
  QByteArray *cthat = (QByteArray *)that;
  auto _o = new(that) QByteArray(dd);
}

  // proto:  QByteArray QByteArray::simplified();
QByteArray* demth_ZNO10QByteArray10simplifiedEv(void *that)
{
  QByteArray *cthat = (QByteArray *)that;
  auto recret = cthat->simplified();
  return new QByteArray(recret);
}

  // proto:  bool QByteArray::contains(const QByteArray & a);
bool demth_ZNK10QByteArray8containsERKS_(void *that, const QByteArray & a)
{
  QByteArray *cthat = (QByteArray *)that;
  return cthat->contains(a);
}

int QByteArrayDataPtr_Class_Size()
{
  return sizeof(QByteArrayDataPtr);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

