//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonNetMessageProducer_PriorityEnum, ComGoogleCumulusSyncClientWorkerCommandProtoManager, JavaUtilLoggingLevel;

@interface ComGoogleCumulusSyncClientWorkerCommandProtoManager_GroupLoader : NSObject
{
    ComGoogleCumulusSyncClientWorkerCommandProtoManager *this$0_;
    id <JavaUtilList> refsToSync_;
    BOOL busy_;
    id <ComGoogleCumulusSyncClientObjectManager_ObjectGroup> loadedGroup_;
    ComGoogleCumulusCommonNetMessageProducer_PriorityEnum *priority_;
    JavaUtilLoggingLevel *thrashingLogLevel_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientWorkerCommandProtoManager:(id)arg1;
- (void)loadGroupWithComGoogleCumulusSyncClientObjectManager:(id)arg1 withJavaUtilCollection:(id)arg2 withComGoogleCumulusCommonNetMessageProducer_PriorityEnum:(id)arg3;
- (id)getThrashingLogLevel;
- (id)getGroupPriority;
- (id)getRefsToSync;
- (id)retrieveLoadedGroup;
- (BOOL)isBusy;

@end

