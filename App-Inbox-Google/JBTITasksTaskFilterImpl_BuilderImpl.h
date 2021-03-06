//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTTaskFilter_Builder.h"

@class JBTTaskFilter_IncludeRecurringEnum, JavaLangLong, NSString;

@interface JBTITasksTaskFilterImpl_BuilderImpl : NSObject <JBTTaskFilter_Builder>
{
    JavaLangLong *dueAfterSec_;
    JavaLangLong *dueBeforeSec_;
    BOOL includeStandaloneType_;
    BOOL includeEmailType_;
    BOOL includeNotStarted_;
    BOOL includeCompleted_;
    BOOL includeDismissed_;
    BOOL requireSnoozed_;
    BOOL requireLocation_;
    BOOL includeAllDayTasks_;
    JBTTaskFilter_IncludeRecurringEnum *includeRecurring_;
    BOOL excludeRecurrenceExceptions_;
    NSString *recurrenceId_;
    BOOL excludeKeepReminders_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_recurrenceId_;
+ (id)__annotations_dueBeforeSec_;
+ (id)__annotations_dueAfterSec_;
+ (id)__annotations_setRecurrenceIdWithNSString__params;
+ (id)__annotations_setDueBeforeSecWithJavaLangLong__params;
+ (id)__annotations_setDueAfterSecWithJavaLangLong__params;
- (void)dealloc;
- (id)init;
- (id)build;
- (id)setExcludeKeepRemindersWithBoolean:(BOOL)arg1;
- (id)setRecurrenceIdWithNSString:(id)arg1;
- (id)setExcludeRecurrenceExceptionsWithBoolean:(BOOL)arg1;
- (id)setIncludeRecurringWithJBTTaskFilter_IncludeRecurringEnum:(id)arg1;
- (id)setIncludeAllDayTasksWithBoolean:(BOOL)arg1;
- (id)setRequireLocationWithBoolean:(BOOL)arg1;
- (id)setRequireSnoozedWithBoolean:(BOOL)arg1;
- (id)setIncludeDismissedWithBoolean:(BOOL)arg1;
- (id)setIncludeCompletedWithBoolean:(BOOL)arg1;
- (id)setIncludeNotStartedWithBoolean:(BOOL)arg1;
- (id)setIncludeEmailTypeWithBoolean:(BOOL)arg1;
- (id)setIncludeStandaloneTypeWithBoolean:(BOOL)arg1;
- (id)setDueBeforeSecWithJavaLangLong:(id)arg1;
- (id)setDueAfterSecWithJavaLangLong:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

