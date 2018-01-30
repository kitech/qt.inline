//  header block begin
// /usr/include/qt/QtWidgets/qcolumnview.h
#include <qcolumnview.h>
#include <QtWidgets>

// QColumnView is pure virtual: false
// QColumnView has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:88
// [1] bool isIndexHidden(const class QModelIndex &)
extern "C"
void* callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex = 0;
extern "C" void set_callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex(void*cbfn)
{ callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:90
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN11QColumnView11resizeEventEP12QResizeEvent = 0;
extern "C" void set_callback_ZN11QColumnView11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN11QColumnView11resizeEventEP12QResizeEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:91
// [-2] void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
extern "C"
void* callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE = 0;
extern "C" void set_callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void*cbfn)
{ callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:92
// [8] QRegion visualRegionForSelection(const class QItemSelection &)
extern "C"
void* callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection = 0;
extern "C" void set_callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection(void*cbfn)
{ callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:93
// [4] int horizontalOffset()
extern "C"
void* callback_ZNK11QColumnView16horizontalOffsetEv = 0;
extern "C" void set_callback_ZNK11QColumnView16horizontalOffsetEv(void*cbfn)
{ callback_ZNK11QColumnView16horizontalOffsetEv = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:94
// [4] int verticalOffset()
extern "C"
void* callback_ZNK11QColumnView14verticalOffsetEv = 0;
extern "C" void set_callback_ZNK11QColumnView14verticalOffsetEv(void*cbfn)
{ callback_ZNK11QColumnView14verticalOffsetEv = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:95
// [-2] void rowsInserted(const class QModelIndex &, int, int)
extern "C"
void* callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii = 0;
extern "C" void set_callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii(void*cbfn)
{ callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:96
// [-2] void currentChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void* callback_ZN11QColumnView14currentChangedERK11QModelIndexS2_ = 0;
extern "C" void set_callback_ZN11QColumnView14currentChangedERK11QModelIndexS2_(void*cbfn)
{ callback_ZN11QColumnView14currentChangedERK11QModelIndexS2_ = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:99
// [-2] void scrollContentsBy(int, int)
extern "C"
void* callback_ZN11QColumnView16scrollContentsByEii = 0;
extern "C" void set_callback_ZN11QColumnView16scrollContentsByEii(void*cbfn)
{ callback_ZN11QColumnView16scrollContentsByEii = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:100
// [8] QAbstractItemView * createColumn(const class QModelIndex &)
extern "C"
void* callback_ZN11QColumnView12createColumnERK11QModelIndex = 0;
extern "C" void set_callback_ZN11QColumnView12createColumnERK11QModelIndex(void*cbfn)
{ callback_ZN11QColumnView12createColumnERK11QModelIndex = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:101
// [-2] void initializeColumn(class QAbstractItemView *)
extern "C"
void* callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView = 0;
extern "C" void set_callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView(void*cbfn)
{ callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView = cbfn; }

class MyQColumnView : public QColumnView {
public:
  virtual ~MyQColumnView() {}
// void QColumnView(class QWidget *)
MyQColumnView(QWidget * parent) : QColumnView(parent) {}
// bool isIndexHidden(const class QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) {
    if (callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex != 0) {
      // callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex(index);
    }
    return QColumnView::isIndexHidden(index);
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    if (callback_ZN11QColumnView11resizeEventEP12QResizeEvent != 0) {
      // callback_ZN11QColumnView11resizeEventEP12QResizeEvent(event);
    }
    QColumnView::resizeEvent(event);
  }
// void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    if (callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE != 0) {
      // callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(rect, command);
    }
    QColumnView::setSelection(rect, command);
  }
// QRegion visualRegionForSelection(const class QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) {
    if (callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection != 0) {
      // callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection(selection);
    }
    return QColumnView::visualRegionForSelection(selection);
  }
// int horizontalOffset()
  virtual int horizontalOffset() {
    if (callback_ZNK11QColumnView16horizontalOffsetEv != 0) {
      // callback_ZNK11QColumnView16horizontalOffsetEv();
    }
    return QColumnView::horizontalOffset();
  }
// int verticalOffset()
  virtual int verticalOffset() {
    if (callback_ZNK11QColumnView14verticalOffsetEv != 0) {
      // callback_ZNK11QColumnView14verticalOffsetEv();
    }
    return QColumnView::verticalOffset();
  }
// void rowsInserted(const class QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    if (callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii != 0) {
      // callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii(parent, start, end);
    }
    QColumnView::rowsInserted(parent, start, end);
  }
// void currentChanged(const class QModelIndex &, const class QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    if (callback_ZN11QColumnView14currentChangedERK11QModelIndexS2_ != 0) {
      // callback_ZN11QColumnView14currentChangedERK11QModelIndexS2_(current, previous);
    }
    QColumnView::currentChanged(current, previous);
  }
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    if (callback_ZN11QColumnView16scrollContentsByEii != 0) {
      // callback_ZN11QColumnView16scrollContentsByEii(dx, dy);
    }
    QColumnView::scrollContentsBy(dx, dy);
  }
// QAbstractItemView * createColumn(const class QModelIndex &)
  virtual QAbstractItemView * createColumn(const QModelIndex & rootIndex) {
    if (callback_ZN11QColumnView12createColumnERK11QModelIndex != 0) {
      // callback_ZN11QColumnView12createColumnERK11QModelIndex(rootIndex);
    }
    return QColumnView::createColumn(rootIndex);
  }
// void initializeColumn(class QAbstractItemView *)
  virtual void initializeColumn(QAbstractItemView * column) {
    if (callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView != 0) {
      // callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView(column);
    }
    QColumnView::initializeColumn(column);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QColumnView10metaObjectEv(void *this_) {
  return (void*)((QColumnView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:58
// [-2] void updatePreviewWidget(const class QModelIndex &)
extern "C"
void C_ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QColumnView*)this_)->updatePreviewWidget(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:61
// [-2] void QColumnView(class QWidget *)
extern "C"
void* C_ZN11QColumnViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQColumnView*)(0);
  return  new MyQColumnView(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:62
// [-2] void ~QColumnView()
extern "C"
void C_ZN11QColumnViewD2Ev(void *this_) {
  delete (QColumnView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:65
// [24] QModelIndex indexAt(const class QPoint &)
extern "C"
void* C_ZNK11QColumnView7indexAtERK6QPoint(void *this_, const QPoint & point) {
  auto rv = ((QColumnView*)this_)->indexAt(point);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:66
// [-2] void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN11QColumnView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, const QModelIndex & index, QAbstractItemView::ScrollHint hint) {
  ((QColumnView*)this_)->scrollTo(index, hint);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:67
// [8] QSize sizeHint()
extern "C"
void* C_ZNK11QColumnView8sizeHintEv(void *this_) {
  auto rv = ((QColumnView*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:68
// [16] QRect visualRect(const class QModelIndex &)
extern "C"
void* C_ZNK11QColumnView10visualRectERK11QModelIndex(void *this_, const QModelIndex & index) {
  auto rv = ((QColumnView*)this_)->visualRect(index);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:69
// [-2] void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN11QColumnView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QColumnView*)this_)->setModel(model);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:70
// [-2] void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN11QColumnView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QColumnView*)this_)->setSelectionModel(selectionModel);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:71
// [-2] void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN11QColumnView12setRootIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QColumnView*)this_)->setRootIndex(index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:72
// [-2] void selectAll()
extern "C"
void C_ZN11QColumnView9selectAllEv(void *this_) {
  ((QColumnView*)this_)->selectAll();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:75
// [-2] void setResizeGripsVisible(_Bool)
extern "C"
void C_ZN11QColumnView21setResizeGripsVisibleEb(void *this_, bool visible) {
  ((QColumnView*)this_)->setResizeGripsVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:76
// [1] bool resizeGripsVisible()
extern "C"
bool C_ZNK11QColumnView18resizeGripsVisibleEv(void *this_) {
  return (bool)((QColumnView*)this_)->resizeGripsVisible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:78
// [8] QWidget * previewWidget()
extern "C"
void* C_ZNK11QColumnView13previewWidgetEv(void *this_) {
  return (void*)((QColumnView*)this_)->previewWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:79
// [-2] void setPreviewWidget(class QWidget *)
extern "C"
void C_ZN11QColumnView16setPreviewWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QColumnView*)this_)->setPreviewWidget(widget);
}
//  main block end
