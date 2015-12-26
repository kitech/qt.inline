// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qvalidator.h
// dst-file: /src/gui/qvalidator.cxx
//

// header block begin =>
#include <qvalidator.h>

extern "C" {

int QRegularExpressionValidator_Class_Size()
{
  return sizeof(QRegularExpressionValidator);
}

// ~QRegularExpressionValidator()
void dedtor_ZN27QRegularExpressionValidatorD0Ev(QRegularExpressionValidator* that)
{
  QRegularExpressionValidator* rthis = (QRegularExpressionValidator*)that;
  delete rthis;
}

// QRegularExpressionValidator(const class QRegularExpression &, class QObject *)
QRegularExpressionValidator* dector_ZN27QRegularExpressionValidatorC1ERK18QRegularExpressionP7QObject(const QRegularExpression & re, QObject * parent)
{
  // static_assert(sizeof(QRegularExpressionValidator) == 32, "tyszerr");
  QRegularExpressionValidator* rthis = new QRegularExpressionValidator(re, parent);
  return rthis;
}

// QRegularExpressionValidator(class QObject *)
QRegularExpressionValidator* dector_ZN27QRegularExpressionValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QRegularExpressionValidator) == 32, "tyszerr");
  QRegularExpressionValidator* rthis = new QRegularExpressionValidator(parent);
  return rthis;
}

int QDoubleValidator_Class_Size()
{
  return sizeof(QDoubleValidator);
}

// QDoubleValidator(class QObject *)
QDoubleValidator* dector_ZN16QDoubleValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QDoubleValidator) == 32, "tyszerr");
  QDoubleValidator* rthis = new QDoubleValidator(parent);
  return rthis;
}

// ~QDoubleValidator()
void dedtor_ZN16QDoubleValidatorD0Ev(QDoubleValidator* that)
{
  QDoubleValidator* rthis = (QDoubleValidator*)that;
  delete rthis;
}

// QDoubleValidator(double, double, int, class QObject *)
QDoubleValidator* dector_ZN16QDoubleValidatorC1EddiP7QObject(double bottom, double top, int decimals, QObject * parent)
{
  // static_assert(sizeof(QDoubleValidator) == 32, "tyszerr");
  QDoubleValidator* rthis = new QDoubleValidator(bottom, top, decimals, parent);
  return rthis;
}

int QIntValidator_Class_Size()
{
  return sizeof(QIntValidator);
}

// QIntValidator(class QObject *)
QIntValidator* dector_ZN13QIntValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QIntValidator) == 32, "tyszerr");
  QIntValidator* rthis = new QIntValidator(parent);
  return rthis;
}

// ~QIntValidator()
void dedtor_ZN13QIntValidatorD0Ev(QIntValidator* that)
{
  QIntValidator* rthis = (QIntValidator*)that;
  delete rthis;
}

// QIntValidator(int, int, class QObject *)
QIntValidator* dector_ZN13QIntValidatorC1EiiP7QObject(int bottom, int top, QObject * parent)
{
  // static_assert(sizeof(QIntValidator) == 32, "tyszerr");
  QIntValidator* rthis = new QIntValidator(bottom, top, parent);
  return rthis;
}

int QValidator_Class_Size()
{
  return sizeof(QValidator);
}

int QRegExpValidator_Class_Size()
{
  return sizeof(QRegExpValidator);
}

// QRegExpValidator(const class QRegExp &, class QObject *)
QRegExpValidator* dector_ZN16QRegExpValidatorC1ERK7QRegExpP7QObject(const QRegExp & rx, QObject * parent)
{
  // static_assert(sizeof(QRegExpValidator) == 32, "tyszerr");
  QRegExpValidator* rthis = new QRegExpValidator(rx, parent);
  return rthis;
}

// QRegExpValidator(class QObject *)
QRegExpValidator* dector_ZN16QRegExpValidatorC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QRegExpValidator) == 32, "tyszerr");
  QRegExpValidator* rthis = new QRegExpValidator(parent);
  return rthis;
}

// ~QRegExpValidator()
void dedtor_ZN16QRegExpValidatorD0Ev(QRegExpValidator* that)
{
  QRegExpValidator* rthis = (QRegExpValidator*)that;
  delete rthis;
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

