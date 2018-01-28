//  header block begin
// /usr/include/qt/QtCore/qsharedpointer_impl.h
#include <qsharedpointer.h>
#include <QtCore>

// NormalDeleter is pure virtual: false
//  header block end

//  main block begin

class MyNormalDeleter : public QtSharedPointer::NormalDeleter {
public:
};

//  main block end
