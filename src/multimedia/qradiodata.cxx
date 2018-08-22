//  header block begin
// /usr/include/qt/QtMultimedia/qradiodata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiodata.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioData is pure virtual: false
// QRadioData has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRadioData : public QRadioData {
public:
  virtual ~MyQRadioData() {}
// void QRadioData(QMediaObject *, QObject *)
MyQRadioData(QMediaObject * mediaObject, QObject * parent) : QRadioData(mediaObject, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool setMediaObject(QMediaObject *)
  virtual bool setMediaObject(QMediaObject * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMediaObject", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QRadioData::setMediaObject(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:116
// [1] bool setMediaObject(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QRadioData14setMediaObjectEP12QMediaObject(void *this_, QMediaObject * arg0) {
  return (bool)((QRadioData*)this_)->QRadioData::setMediaObject(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QRadioData10metaObjectEv(void *this_) {
  return (void*)((QRadioData*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QRadioData11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRadioData*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QRadioData11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRadioData*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QRadioData2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioData::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QRadioData6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioData::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:85
// [-2] void QRadioData(QMediaObject *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QRadioDataC2EP12QMediaObjectP7QObject(QMediaObject * mediaObject, QObject * parent) {
  auto _nilp = (MyQRadioData*)(0);
  return  new MyQRadioData(mediaObject, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:86
// [-2] void ~QRadioData()
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioDataD2Ev(void *this_) {
  delete (QRadioData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:88
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK10QRadioData12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QRadioData*)this_)->availability();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:90
// [8] QMediaObject * mediaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QRadioData11mediaObjectEv(void *this_) {
  return (void*)((QRadioData*)this_)->mediaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:92
// [8] QString stationId()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QRadioData9stationIdEv(void *this_) {
  auto rv = ((QRadioData*)this_)->stationId();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:93
// [4] QRadioData::ProgramType programType()
extern "C" Q_DECL_EXPORT
QRadioData::ProgramType C_ZNK10QRadioData11programTypeEv(void *this_) {
  return (QRadioData::ProgramType)((QRadioData*)this_)->programType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:94
// [8] QString programTypeName()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QRadioData15programTypeNameEv(void *this_) {
  auto rv = ((QRadioData*)this_)->programTypeName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:95
// [8] QString stationName()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QRadioData11stationNameEv(void *this_) {
  auto rv = ((QRadioData*)this_)->stationName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:96
// [8] QString radioText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QRadioData9radioTextEv(void *this_) {
  auto rv = ((QRadioData*)this_)->radioText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:97
// [1] bool isAlternativeFrequenciesEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QRadioData31isAlternativeFrequenciesEnabledEv(void *this_) {
  return (bool)((QRadioData*)this_)->isAlternativeFrequenciesEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:99
// [4] QRadioData::Error error()
extern "C" Q_DECL_EXPORT
QRadioData::Error C_ZNK10QRadioData5errorEv(void *this_) {
  return (QRadioData::Error)((QRadioData*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:100
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QRadioData11errorStringEv(void *this_) {
  auto rv = ((QRadioData*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:103
// [-2] void setAlternativeFrequenciesEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData32setAlternativeFrequenciesEnabledEb(void *this_, bool enabled) {
  ((QRadioData*)this_)->setAlternativeFrequenciesEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:106
// [-2] void stationIdChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData16stationIdChangedE7QString(void *this_, QString* stationId) {
  ((QRadioData*)this_)->stationIdChanged(*stationId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:107
// [-2] void programTypeChanged(QRadioData::ProgramType)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData18programTypeChangedENS_11ProgramTypeE(void *this_, QRadioData::ProgramType programType) {
  ((QRadioData*)this_)->programTypeChanged(programType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:108
// [-2] void programTypeNameChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData22programTypeNameChangedE7QString(void *this_, QString* programTypeName) {
  ((QRadioData*)this_)->programTypeNameChanged(*programTypeName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:109
// [-2] void stationNameChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData18stationNameChangedE7QString(void *this_, QString* stationName) {
  ((QRadioData*)this_)->stationNameChanged(*stationName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:110
// [-2] void radioTextChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData16radioTextChangedE7QString(void *this_, QString* radioText) {
  ((QRadioData*)this_)->radioTextChanged(*radioText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:111
// [-2] void alternativeFrequenciesEnabledChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData36alternativeFrequenciesEnabledChangedEb(void *this_, bool enabled) {
  ((QRadioData*)this_)->alternativeFrequenciesEnabledChanged(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:113
// [-2] void error(QRadioData::Error)
extern "C" Q_DECL_EXPORT
void C_ZN10QRadioData5errorENS_5ErrorE(void *this_, QRadioData::Error error) {
  ((QRadioData*)this_)->error(error);
}

//  main block end
