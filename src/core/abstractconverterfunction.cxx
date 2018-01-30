//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#include <qmetatype.h>
#include <QtCore>

// AbstractConverterFunction is pure virtual: false
// AbstractConverterFunction has virtual projected: false
//  header block end

//  main block begin

class MyAbstractConverterFunction : public QtPrivate::AbstractConverterFunction {
public:
  virtual ~MyAbstractConverterFunction() {}
};

//  main block end
