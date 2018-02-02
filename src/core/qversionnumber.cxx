//  header block begin
// /usr/include/qt/QtCore/qversionnumber.h
#include <qversionnumber.h>
#include <QtCore>

// QVersionNumber is pure virtual: false
// QVersionNumber has virtual projected: false
//  header block end

//  main block begin

class MyQVersionNumber : public QVersionNumber {
public:
  virtual ~MyQVersionNumber() {}
// void QVersionNumber()
MyQVersionNumber() : QVersionNumber() {}
// void QVersionNumber(int)
MyQVersionNumber(int maj) : QVersionNumber(maj) {}
// void QVersionNumber(int, int)
MyQVersionNumber(int maj, int min) : QVersionNumber(maj, min) {}
// void QVersionNumber(int, int, int)
MyQVersionNumber(int maj, int min, int mic) : QVersionNumber(maj, min, mic) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:221
// [-2] void QVersionNumber()
extern "C"
void* C_ZN14QVersionNumberC2Ev() {
  return  new QVersionNumber();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:242
// [-2] void QVersionNumber(int)
extern "C"
void* C_ZN14QVersionNumberC2Ei(int maj) {
  return  new QVersionNumber(maj);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:245
// [-2] void QVersionNumber(int, int)
extern "C"
void* C_ZN14QVersionNumberC2Eii(int maj, int min) {
  return  new QVersionNumber(maj, min);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:248
// [-2] void QVersionNumber(int, int, int)
extern "C"
void* C_ZN14QVersionNumberC2Eiii(int maj, int min, int mic) {
  return  new QVersionNumber(maj, min, mic);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:251
// [1] bool isNull()
extern "C"
bool C_ZNK14QVersionNumber6isNullEv(void *this_) {
  return (bool)((QVersionNumber*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:254
// [1] bool isNormalized()
extern "C"
bool C_ZNK14QVersionNumber12isNormalizedEv(void *this_) {
  return (bool)((QVersionNumber*)this_)->isNormalized();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:257
// [4] int majorVersion()
extern "C"
int C_ZNK14QVersionNumber12majorVersionEv(void *this_) {
  return (int)((QVersionNumber*)this_)->majorVersion();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:260
// [4] int minorVersion()
extern "C"
int C_ZNK14QVersionNumber12minorVersionEv(void *this_) {
  return (int)((QVersionNumber*)this_)->minorVersion();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:263
// [4] int microVersion()
extern "C"
int C_ZNK14QVersionNumber12microVersionEv(void *this_) {
  return (int)((QVersionNumber*)this_)->microVersion();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:266
// [8] QVersionNumber normalized()
extern "C"
void* C_ZNK14QVersionNumber10normalizedEv(void *this_) {
  auto rv = ((QVersionNumber*)this_)->normalized();
return new QVersionNumber(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:270
// [4] int segmentAt(int)
extern "C"
int C_ZNK14QVersionNumber9segmentAtEi(void *this_, int index) {
  return (int)((QVersionNumber*)this_)->segmentAt(index);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:273
// [4] int segmentCount()
extern "C"
int C_ZNK14QVersionNumber12segmentCountEv(void *this_) {
  return (int)((QVersionNumber*)this_)->segmentCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:276
// [1] bool isPrefixOf(const class QVersionNumber &)
extern "C"
bool C_ZNK14QVersionNumber10isPrefixOfERKS_(void *this_, QVersionNumber* other) {
  return (bool)((QVersionNumber*)this_)->isPrefixOf(*other);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:278
// [4] int compare(const class QVersionNumber &, const class QVersionNumber &)
extern "C"
int C_ZN14QVersionNumber7compareERKS_S1_(QVersionNumber* v1, QVersionNumber* v2) {
  return (int)QVersionNumber::compare(*v1, *v2);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:280
// [8] QVersionNumber commonPrefix(const class QVersionNumber &, const class QVersionNumber &)
extern "C"
void* C_ZN14QVersionNumber12commonPrefixERKS_S1_(QVersionNumber* v1, QVersionNumber* v2) {
  auto rv = QVersionNumber::commonPrefix(*v1, *v2);
return new QVersionNumber(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:282
// [8] QString toString()
extern "C"
void* C_ZNK14QVersionNumber8toStringEv(void *this_) {
  auto rv = ((QVersionNumber*)this_)->toString();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:284
// [8] QVersionNumber fromString(const class QString &, int *)
extern "C"
void* C_ZN14QVersionNumber10fromStringERK7QStringPi(QString* string, int * suffixIndex) {
  auto rv = QVersionNumber::fromString(*string, suffixIndex);
return new QVersionNumber(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:286
// [8] QVersionNumber fromString(class QLatin1String, int *)
extern "C"
void* C_ZN14QVersionNumber10fromStringE13QLatin1StringPi(QLatin1String* string, int * suffixIndex) {
  auto rv = QVersionNumber::fromString(*string, suffixIndex);
return new QVersionNumber(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:287
// [8] QVersionNumber fromString(class QStringView, int *)
extern "C"
void* C_ZN14QVersionNumber10fromStringE11QStringViewPi(QStringView* string, int * suffixIndex) {
  auto rv = QVersionNumber::fromString(*string, suffixIndex);
return new QVersionNumber(rv);
}

extern "C"
void C_ZN14QVersionNumberD2Ev(void *this_) {
  delete (QVersionNumber*)(this_);
}
//  main block end
