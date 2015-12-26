// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qheaderview.h
// dst-file: /src/widgets/qheaderview.cxx
//

// header block begin =>
#include <qheaderview.h>

extern "C" {

int QHeaderView_Class_Size()
{
  return sizeof(QHeaderView);
}

// ~QHeaderView()
void dedtor_ZN11QHeaderViewD0Ev(QHeaderView* that)
{
  QHeaderView* rthis = (QHeaderView*)that;
  delete rthis;
}

// QHeaderView(Qt::Orientation, class QWidget *)
QHeaderView* dector_ZN11QHeaderViewC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent)
{
  // static_assert(sizeof(QHeaderView) == 32, "tyszerr");
  QHeaderView* rthis = new QHeaderView(orientation, parent);
  return rthis;
}

  // proto:  void QHeaderView::hideSection(int logicalIndex);
void demth_ZN11QHeaderView11hideSectionEi(void *that, int logicalIndex)
{
  QHeaderView *cthat = (QHeaderView *)that;
   cthat->hideSection(logicalIndex);
}

  // proto:  int QHeaderView::logicalIndexAt(const QPoint & pos);
int demth_ZNK11QHeaderView14logicalIndexAtERK6QPoint(void *that, const QPoint & pos)
{
  QHeaderView *cthat = (QHeaderView *)that;
  return cthat->logicalIndexAt(pos);
}

  // proto:  void QHeaderView::showSection(int logicalIndex);
void demth_ZN11QHeaderView11showSectionEi(void *that, int logicalIndex)
{
  QHeaderView *cthat = (QHeaderView *)that;
   cthat->showSection(logicalIndex);
}

  // proto:  int QHeaderView::logicalIndexAt(int x, int y);
int demth_ZNK11QHeaderView14logicalIndexAtEii(void *that, int x, int y)
{
  QHeaderView *cthat = (QHeaderView *)that;
  return cthat->logicalIndexAt(x, y);
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
// <= body block end

