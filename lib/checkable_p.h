#ifndef CHECKABLE_P_H
#define CHECKABLE_P_H

#include <QObject>
#include "checkable_internal.h"

class QStateMachine;
class QState;
class QSignalTransition;
class Checkable;
class RippleOverlay;

class CheckablePrivate
{
    Q_DISABLE_COPY(CheckablePrivate)
    Q_DECLARE_PUBLIC(Checkable)

public:
    CheckablePrivate(Checkable *q);
    virtual ~CheckablePrivate();

    void init();

    Checkable     *const q_ptr;
    RippleOverlay *ripple;
    CheckableIcon *checkedIcon;
    CheckableIcon *uncheckedIcon;
    QStateMachine *machine;
    QState        *uncheckedState;
    QState        *checkedState;
    QState        *disabledUncheckedState;
    QState        *disabledCheckedState;
    QSignalTransition *uncheckedTransition;
    QSignalTransition *checkedTransition;
    QColor         checkedColor;
    QColor         uncheckedColor;
    QColor         textColor;
    QColor         disabledColor;
    bool           useThemeColors;
};

#endif // CHECKABLE_P_H