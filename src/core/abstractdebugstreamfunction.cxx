//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#include <qmetatype.h>
#include <QtCore>

// AbstractDebugStreamFunction is pure virtual: false
// AbstractDebugStreamFunction has virtual projected: false
//  header block end

//  main block begin

class MyAbstractDebugStreamFunction : public QtPrivate::AbstractDebugStreamFunction {
public:
  virtual ~MyAbstractDebugStreamFunction() {}
};

//  main block end
