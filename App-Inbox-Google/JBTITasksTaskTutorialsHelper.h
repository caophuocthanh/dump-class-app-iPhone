//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplTutorialsTutorialManager;

@interface JBTITasksTaskTutorialsHelper : NSObject
{
    id <JBTTutorialHelper> tutorialHelper_;
    ComGoogleAppsBigtopSyncClientImplTutorialsTutorialManager *tutorialManager_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)lastTutorialMatchesWithJBTTask:(id)arg1 withJBTTutorial_TypeEnum:(id)arg2;
- (void)maybeAcknowledgeSnoozeTutorialWithJBTICommonTransaction:(id)arg1;
- (void)maybeAcknowledgeArchiveTutorialWithJBTICommonTransaction:(id)arg1;
- (void)maybeTriggerSnoozeViewTutorialWithJBTTask:(id)arg1 withJBTICommonTransaction:(id)arg2;
- (void)maybeTriggerDoneViewTutorialWithJBTTask:(id)arg1 withJBTICommonTransaction:(id)arg2;
- (id)initWithComGoogleAppsBigtopSyncClientImplTutorialsTutorialManager:(id)arg1;

@end

