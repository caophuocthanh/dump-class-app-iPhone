//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAppBackgroundStateManager, AFDispatchPriorityQueue, EAGLContext;

@interface AFOpenGLManager : NSObject
{
    BOOL _hasSetup;
    BOOL _purgeFlag;
    BOOL _shouldPurgeWhenPossible;
    struct MoaGLData *_glData;
    EAGLContext *_glContext;
    int _managerRetainCount;
    AFDispatchPriorityQueue *_priorityQueue;
    AFAppBackgroundStateManager *_backgroundStateManager;
    int _loadQueueIdentifier;
    int _prewarmQueueIdentifer;
    struct CGSize _maxSize;
}

+ (void)cancelOpenGLDataPurgeRequest;
+ (void)requestOpenGLDataPurge;
+ (void)beginOpenGLLoad;
+ (id)sharedOpenGLManager;
+ (void)setPurgeGPUMemoryWhenPossible:(BOOL)arg1;
@property(nonatomic) BOOL shouldPurgeWhenPossible; // @synthesize shouldPurgeWhenPossible=_shouldPurgeWhenPossible;
@property(nonatomic) BOOL purgeFlag; // @synthesize purgeFlag=_purgeFlag;
@property(nonatomic) int prewarmQueueIdentifer; // @synthesize prewarmQueueIdentifer=_prewarmQueueIdentifer;
@property(nonatomic) int loadQueueIdentifier; // @synthesize loadQueueIdentifier=_loadQueueIdentifier;
@property(retain, nonatomic) AFAppBackgroundStateManager *backgroundStateManager; // @synthesize backgroundStateManager=_backgroundStateManager;
@property(retain, nonatomic) AFDispatchPriorityQueue *priorityQueue; // @synthesize priorityQueue=_priorityQueue;
@property(nonatomic) int managerRetainCount; // @synthesize managerRetainCount=_managerRetainCount;
@property BOOL hasSetup; // @synthesize hasSetup=_hasSetup;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property struct MoaGLData *glData; // @synthesize glData=_glData;
- (void).cxx_destruct;
- (void)addBlock:(CDUnknownBlockType)arg1 toQueueWithIdentifier:(int)arg2;
- (void)resumeRenderingOnQueueWithIdentifier:(int)arg1;
- (void)cancelRenderingOnQueueWithIdentifier:(int)arg1;
- (void)pauseRenderingOnQueueWithIdentifier:(int)arg1;
- (void)destroyQueueWithIdentifier:(int)arg1;
- (int)generateQueueWithType:(int)arg1;
- (void)presentCurrentRenderbuffer;
- (void)clearCurrentOpenGLContext;
- (void)makeCurrentOpenGLContext;
- (void)beginPrewarmingShaders;
- (void)breakdown;
- (void)setup;
- (void)releaseManager;
- (id)retainManager;
- (id)init;

@end

