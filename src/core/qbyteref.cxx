//  header block begin
// /usr/include/qt/QtCore/qbytearray.h
#include <qbytearray.h>
#include <QtCore>

// QByteRef is pure virtual: false
// QByteRef has virtual projected: false
//  header block end

//  main block begin

class MyQByteRef : public QByteRef {
public:
  virtual ~MyQByteRef() {}
};

//  main block end
