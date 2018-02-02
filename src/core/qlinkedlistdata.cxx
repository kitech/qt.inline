//  header block begin
// /usr/include/qt/QtCore/qlinkedlist.h
#include <qlinkedlist.h>
#include <QtCore>

// QLinkedListData is pure virtual: false
// QLinkedListData has virtual projected: false
//  header block end

//  main block begin

class MyQLinkedListData : public QLinkedListData {
public:
  virtual ~MyQLinkedListData() {}
};


extern "C"
void C_ZN15QLinkedListDataD2Ev(void *this_) {
  delete (QLinkedListData*)(this_);
}
//  main block end
