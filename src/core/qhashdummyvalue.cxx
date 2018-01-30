//  header block begin
// /usr/include/qt/QtCore/qhash.h
#include <qhash.h>
#include <QtCore>

// QHashDummyValue is pure virtual: false
// QHashDummyValue has virtual projected: false
//  header block end

//  main block begin

class MyQHashDummyValue : public QHashDummyValue {
public:
  virtual ~MyQHashDummyValue() {}
};

//  main block end
