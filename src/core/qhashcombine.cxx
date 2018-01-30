//  header block begin
// /usr/include/qt/QtCore/qhashfunctions.h
#include <qhashfunctions.h>
#include <QtCore>

// QHashCombine is pure virtual: false
// QHashCombine has virtual projected: false
//  header block end

//  main block begin

class MyQHashCombine : public QtPrivate::QHashCombine {
public:
  virtual ~MyQHashCombine() {}
};

//  main block end
