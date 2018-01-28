//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>

// QTextBlockUserData is pure virtual: false
//  header block end

//  main block begin

class MyQTextBlockUserData : public QTextBlockUserData {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:198
// [-2] void ~QTextBlockUserData()
extern "C"
void C_ZN18QTextBlockUserDataD1Ev(void *this_) {
  delete (QTextBlockUserData*)(this_);
}
//  main block end
