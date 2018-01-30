//  header block begin
// /usr/include/qt/QtCore/qsharedpointer_impl.h
#include <qsharedpointer.h>
#include <QtCore>

// NormalDeleter is pure virtual: false
// NormalDeleter has virtual projected: false
//  header block end

//  main block begin

class MyNormalDeleter : public QtSharedPointer::NormalDeleter {
public:
  virtual ~MyNormalDeleter() {}
};

//  main block end
