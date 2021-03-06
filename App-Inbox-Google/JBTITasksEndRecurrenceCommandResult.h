//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTArchiveCommandResult.h"
#import "JBTTrashCommandResult.h"

@class JBTCommand_TypeEnum, JBTICommonSapiSpan_Factory, NSString;

@interface JBTITasksEndRecurrenceCommandResult : NSObject <JBTArchiveCommandResult, JBTTrashCommandResult>
{
    JBTCommand_TypeEnum *commandType_;
    id <JBTTask> recurrenceMaster_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_archiveRecurrenceWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_trashRecurrenceWithJBTCallback_withJBTSpan__params;
- (void)dealloc;
- (void)archiveRecurrenceWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canArchiveRecurrence;
- (void)trashRecurrenceWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canTrashRecurrence;
- (id)getType;
- (id)initWithJBTCommand_TypeEnum:(id)arg1 withJBTTask:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

