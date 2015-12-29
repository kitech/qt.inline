// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qtextlist.h
// dst-file: /src/gui/qtextlist.cxx
//

// header block begin =>
#include <qtextlist.h>

extern "C" {

int QTextList_Class_Size()
{
  return sizeof(QTextList);
}

// QTextList(class QTextDocument *)
QTextList* dector_ZN9QTextListC1EP13QTextDocument(QTextDocument * doc)
{
  // static_assert(sizeof(QTextList) == 32, "tyszerr");
  QTextList* rthis = new QTextList(doc);
  return rthis;
}

// ~QTextList()
void dedtor_ZN9QTextListD0Ev(QTextList* that)
{
  QTextList* rthis = (QTextList*)that;
  delete rthis;
}

  // proto:  void QTextList::setFormat(const QTextListFormat & format);
void demth_ZN9QTextList9setFormatERK15QTextListFormat(void *that, const QTextListFormat & format)
{
  QTextList *cthat = (QTextList *)that;
   cthat->setFormat(format);
}

  // proto:  bool QTextList::isEmpty();
bool demth_ZNK9QTextList7isEmptyEv(void *that)
{
  QTextList *cthat = (QTextList *)that;
  return cthat->isEmpty();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTextList_SlotProxy here
class QTextList_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextList_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qtextlist.moc"

extern "C" {
  QTextList_SlotProxy* QTextList_SlotProxy_new()
  {
    return new QTextList_SlotProxy();
  }
};

// <= body block end

