//  header block begin
// /usr/include/qt/QtWidgets/qcolumnview.h
#include <qcolumnview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColumnView is pure virtual: false
// QColumnView has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex_fnptr = 0;
// extern "C" void set_callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex(void*cbfn)
// { callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex_fnptr = cbfn; }
// void* callback_ZN11QColumnView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE_fnptr = 0;
// extern "C" void set_callback_ZN11QColumnView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void*cbfn)
// { callback_ZN11QColumnView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE_fnptr = cbfn; }
// void* callback_ZN11QColumnView11resizeEventEP12QResizeEvent_fnptr = 0;
// extern "C" void set_callback_ZN11QColumnView11resizeEventEP12QResizeEvent(void*cbfn)
// { callback_ZN11QColumnView11resizeEventEP12QResizeEvent_fnptr = cbfn; }
// void* callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE_fnptr = 0;
// extern "C" void set_callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void*cbfn)
// { callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE_fnptr = cbfn; }
// void* callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection_fnptr = 0;
// extern "C" void set_callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection(void*cbfn)
// { callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection_fnptr = cbfn; }
// void* callback_ZNK11QColumnView16horizontalOffsetEv_fnptr = 0;
// extern "C" void set_callback_ZNK11QColumnView16horizontalOffsetEv(void*cbfn)
// { callback_ZNK11QColumnView16horizontalOffsetEv_fnptr = cbfn; }
// void* callback_ZNK11QColumnView14verticalOffsetEv_fnptr = 0;
// extern "C" void set_callback_ZNK11QColumnView14verticalOffsetEv(void*cbfn)
// { callback_ZNK11QColumnView14verticalOffsetEv_fnptr = cbfn; }
// void* callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii_fnptr = 0;
// extern "C" void set_callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii(void*cbfn)
// { callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii_fnptr = cbfn; }
// void* callback_ZN11QColumnView14currentChangedERK11QModelIndexS2__fnptr = 0;
// extern "C" void set_callback_ZN11QColumnView14currentChangedERK11QModelIndexS2_(void*cbfn)
// { callback_ZN11QColumnView14currentChangedERK11QModelIndexS2__fnptr = cbfn; }
// void* callback_ZN11QColumnView16scrollContentsByEii_fnptr = 0;
// extern "C" void set_callback_ZN11QColumnView16scrollContentsByEii(void*cbfn)
// { callback_ZN11QColumnView16scrollContentsByEii_fnptr = cbfn; }
// void* callback_ZN11QColumnView12createColumnERK11QModelIndex_fnptr = 0;
// extern "C" void set_callback_ZN11QColumnView12createColumnERK11QModelIndex(void*cbfn)
// { callback_ZN11QColumnView12createColumnERK11QModelIndex_fnptr = cbfn; }
// void* callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView_fnptr = 0;
// extern "C" void set_callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView(void*cbfn)
// { callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView_fnptr = cbfn; }

class MyQColumnView : public QColumnView {
public:
  virtual ~MyQColumnView() {}
// void QColumnView(class QWidget *)
MyQColumnView(QWidget * parent) : QColumnView(parent) {}
// bool isIndexHidden(const class QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* , QModelIndex*))(callback_ZNK11QColumnView13isIndexHiddenERK11QModelIndex_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&index);
    // }
    return QColumnView::isIndexHidden(index);
  }
  }
// QModelIndex moveCursor(enum QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    // auto fnptr = ((QModelIndex (*)(void* , QAbstractItemView::CursorAction, QFlags<Qt::KeyboardModifier>))(callback_ZN11QColumnView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , cursorAction, modifiers);
    // }
    return QColumnView::moveCursor(cursorAction, modifiers);
  }
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QResizeEvent *))(callback_ZN11QColumnView11resizeEventEP12QResizeEvent_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , event);
    // }
    QColumnView::resizeEvent(event);
  }
  }
// void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QRect*, QFlags<QItemSelectionModel::SelectionFlag>))(callback_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QRect*)&rect, command);
    // }
    QColumnView::setSelection(rect, command);
  }
  }
// QRegion visualRegionForSelection(const class QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRegion*)(irv);
      // RecordRecordQRegion
    } else {
    // auto fnptr = ((QRegion (*)(void* , QItemSelection*))(callback_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QItemSelection*)&selection);
    // }
    return QColumnView::visualRegionForSelection(selection);
  }
  }
// int horizontalOffset()
  virtual int horizontalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    // auto fnptr = ((int (*)(void* ))(callback_ZNK11QColumnView16horizontalOffsetEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QColumnView::horizontalOffset();
  }
  }
// int verticalOffset()
  virtual int verticalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    // auto fnptr = ((int (*)(void* ))(callback_ZNK11QColumnView14verticalOffsetEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QColumnView::verticalOffset();
  }
  }
// void rowsInserted(const class QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QModelIndex*, int, int))(callback_ZN11QColumnView12rowsInsertedERK11QModelIndexii_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&parent, start, end);
    // }
    QColumnView::rowsInserted(parent, start, end);
  }
  }
// void currentChanged(const class QModelIndex &, const class QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QModelIndex*, QModelIndex*))(callback_ZN11QColumnView14currentChangedERK11QModelIndexS2__fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&current, (QModelIndex*)&previous);
    // }
    QColumnView::currentChanged(current, previous);
  }
  }
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , int, int))(callback_ZN11QColumnView16scrollContentsByEii_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , dx, dy);
    // }
    QColumnView::scrollContentsBy(dx, dy);
  }
  }
// QAbstractItemView * createColumn(const class QModelIndex &)
  virtual QAbstractItemView * createColumn(const QModelIndex & rootIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createColumn", &handled, 1, (uint64_t)&rootIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractItemView *)(irv);
      // PointerPointerQAbstractItemView *
    } else {
    // auto fnptr = ((QAbstractItemView * (*)(void* , QModelIndex*))(callback_ZN11QColumnView12createColumnERK11QModelIndex_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QModelIndex*)&rootIndex);
    // }
    return QColumnView::createColumn(rootIndex);
  }
  }
// void initializeColumn(class QAbstractItemView *)
  virtual void initializeColumn(QAbstractItemView * column) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initializeColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QAbstractItemView *))(callback_ZNK11QColumnView16initializeColumnEP17QAbstractItemView_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , column);
    // }
    QColumnView::initializeColumn(column);
  }
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
void C_ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QColumnView*)this_)->updatePreviewWidget(*index);
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
void* C_ZNK11QColumnView7indexAtERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QColumnView*)this_)->indexAt(*point);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:66
// [-2] void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN11QColumnView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QColumnView*)this_)->scrollTo(*index, hint);
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
void* C_ZNK11QColumnView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QColumnView*)this_)->visualRect(*index);
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
void C_ZN11QColumnView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QColumnView*)this_)->setRootIndex(*index);
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
