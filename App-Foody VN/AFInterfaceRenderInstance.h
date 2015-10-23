//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFGLRenderInstance.h"

@class NSCountedSet, NSMutableArray;

@interface AFInterfaceRenderInstance : AFGLRenderInstance
{
    BOOL _undoingOrRedoing;
    NSCountedSet *_thumbnailContextCache;
    NSMutableArray *_applyCheckPointStack;
    NSMutableArray *_redoCheckPointStack;
    unsigned int _currentCheckpointPurgeIndex;
    unsigned int _checkpointPurgeInterval;
}

@property(nonatomic) unsigned int checkpointPurgeInterval; // @synthesize checkpointPurgeInterval=_checkpointPurgeInterval;
@property(nonatomic) unsigned int currentCheckpointPurgeIndex; // @synthesize currentCheckpointPurgeIndex=_currentCheckpointPurgeIndex;
@property(retain, nonatomic) NSMutableArray *redoCheckPointStack; // @synthesize redoCheckPointStack=_redoCheckPointStack;
@property(retain, nonatomic) NSMutableArray *applyCheckPointStack; // @synthesize applyCheckPointStack=_applyCheckPointStack;
@property(nonatomic, getter=isUndoingOrRedoing) BOOL undoingOrRedoing; // @synthesize undoingOrRedoing=_undoingOrRedoing;
@property(retain, nonatomic) NSCountedSet *thumbnailContextCache; // @synthesize thumbnailContextCache=_thumbnailContextCache;
- (void).cxx_destruct;
- (unsigned int)purgeCheckPoints:(unsigned int)arg1 withInterval:(int)arg2;
- (void)purgeCheckPointsIfPossible;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)redoProcessor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)undoWithProcessorStack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)closestUndoIndex;
- (struct CGSize)originalImageSize;
- (void)showLastRenderedImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)showLastAppliedImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)showOriginalImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCurrentImageAsOriginal;
- (void)enqueueProcessor:(id)arg1 inContextWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)destroyThumbnailContextWithIdentifier:(id)arg1;
- (id)createThumbnailContextWithSize:(struct CGSize)arg1;
- (void)cleanupOpenGLView:(id)arg1;
- (void)renderIdentityImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDestinationImageSize:(struct CGSize)arg1;
- (void)setDestinationOpenGLView:(id)arg1;
- (void)commit;
- (void)enqueueProcessor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)moaLiteContextForBitmap:(struct MoaBitmap *)arg1;
- (id)init;
- (void)dealloc;

@end
