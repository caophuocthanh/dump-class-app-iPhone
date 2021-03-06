//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonUndoer.h"

@class ComGoogleAppsBigtopServicesTasksBigTopTask, ComGoogleAppsBigtopServicesTasksUpdateMask, NSString;

@interface JBTITasksTaskUndoer : NSObject <JBTICommonUndoer>
{
    id <JBTId> objectId_;
    NSString *firstMessageId_;
    ComGoogleAppsBigtopServicesTasksBigTopTask *originalTaskProto_;
    ComGoogleAppsBigtopServicesTasksUpdateMask *updateMask_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_updateMask_;
+ (id)__annotations_initWithJBTId_withNSString_withComGoogleAppsBigtopServicesTasksBigTopTask_withComGoogleAppsBigtopServicesTasksUpdateMask__params;
+ (id)undoEmailTaskWithJBTId:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg3;
+ (id)undoStandaloneTaskWithJBTId:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg3 withComGoogleAppsBigtopServicesTasksUpdateMask:(id)arg4;
- (void)dealloc;
- (void)undoWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithJBTId:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg3 withComGoogleAppsBigtopServicesTasksUpdateMask:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

