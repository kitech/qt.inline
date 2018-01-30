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

//  main block end
