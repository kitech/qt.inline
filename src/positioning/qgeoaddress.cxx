//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeoaddress.h
#ifndef protected
#define protected public
#endif
#include <qgeoaddress.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoAddress is pure virtual: false
// QGeoAddress has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoAddress : public QGeoAddress {
public:
  virtual ~MyQGeoAddress() {}
// void QGeoAddress()
MyQGeoAddress() : QGeoAddress() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:54
// [-2] void QGeoAddress()
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoAddressC2Ev() {
  return  new QGeoAddress();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:56
// [-2] void ~QGeoAddress()
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddressD2Ev(void *this_) {
  delete (QGeoAddress*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:58
// [8] QGeoAddress & operator=(const QGeoAddress &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QGeoAddressaSERKS_(void *this_, QGeoAddress* other) {
  auto& rv = ((QGeoAddress*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:59
// [1] bool operator==(const QGeoAddress &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoAddresseqERKS_(void *this_, QGeoAddress* other) {
  return (bool)((QGeoAddress*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:60
// [1] bool operator!=(const QGeoAddress &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoAddressneERKS_(void *this_, QGeoAddress* other) {
  return (bool)((QGeoAddress*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:64
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress4textEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:65
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress7setTextERK7QString(void *this_, QString* text) {
  ((QGeoAddress*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:67
// [8] QString country()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress7countryEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->country();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:68
// [-2] void setCountry(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress10setCountryERK7QString(void *this_, QString* country) {
  ((QGeoAddress*)this_)->setCountry(*country);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:70
// [8] QString countryCode()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress11countryCodeEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->countryCode();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:71
// [-2] void setCountryCode(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress14setCountryCodeERK7QString(void *this_, QString* countryCode) {
  ((QGeoAddress*)this_)->setCountryCode(*countryCode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:73
// [8] QString state()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress5stateEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->state();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:74
// [-2] void setState(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress8setStateERK7QString(void *this_, QString* state) {
  ((QGeoAddress*)this_)->setState(*state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:76
// [8] QString county()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress6countyEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->county();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:77
// [-2] void setCounty(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress9setCountyERK7QString(void *this_, QString* county) {
  ((QGeoAddress*)this_)->setCounty(*county);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:79
// [8] QString city()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress4cityEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->city();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:80
// [-2] void setCity(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress7setCityERK7QString(void *this_, QString* city) {
  ((QGeoAddress*)this_)->setCity(*city);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:82
// [8] QString district()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress8districtEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->district();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:83
// [-2] void setDistrict(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress11setDistrictERK7QString(void *this_, QString* district) {
  ((QGeoAddress*)this_)->setDistrict(*district);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:85
// [8] QString postalCode()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress10postalCodeEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->postalCode();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:86
// [-2] void setPostalCode(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress13setPostalCodeERK7QString(void *this_, QString* postalCode) {
  ((QGeoAddress*)this_)->setPostalCode(*postalCode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:88
// [8] QString street()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QGeoAddress6streetEv(void *this_) {
  auto rv = ((QGeoAddress*)this_)->street();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:89
// [-2] void setStreet(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress9setStreetERK7QString(void *this_, QString* street) {
  ((QGeoAddress*)this_)->setStreet(*street);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:91
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoAddress7isEmptyEv(void *this_) {
  return (bool)((QGeoAddress*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:92
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN11QGeoAddress5clearEv(void *this_) {
  ((QGeoAddress*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoaddress.h:94
// [1] bool isTextGenerated()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QGeoAddress15isTextGeneratedEv(void *this_) {
  return (bool)((QGeoAddress*)this_)->isTextGenerated();
}

//  main block end
