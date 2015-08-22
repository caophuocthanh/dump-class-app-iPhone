//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDealloc2MainObject.h"

#import "ASFlowLayoutControllerDataSource.h"

@class NSMutableArray, NSOperationQueue;

@interface ASDataController : ASDealloc2MainObject <ASFlowLayoutControllerDataSource>
{
    NSMutableArray *_completedNodes;
    NSMutableArray *_editingNodes;
    NSMutableArray *_pendingEditCommandBlocks;
    NSOperationQueue *_editingTransactionQueue;
    BOOL _asyncDataFetchingEnabled;
    BOOL _delegateDidInsertNodes;
    BOOL _delegateDidDeleteNodes;
    BOOL _delegateDidInsertSections;
    BOOL _delegateDidDeleteSections;
    id <ASDataControllerSource> _dataSource;
    id <ASDataControllerDelegate> _delegate;
    unsigned int _batchUpdateCounter;
}

+ (unsigned int)parallelProcessorCount;
@property unsigned int batchUpdateCounter; // @synthesize batchUpdateCounter=_batchUpdateCounter;
@property(nonatomic) __weak id <ASDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ASDataControllerSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (id)completedNodes;
- (id)nodesAtIndexPaths:(id)arg1;
- (id)nodeAtIndexPath:(id)arg1;
- (unsigned int)numberOfRowsInSection:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 withAnimationOptions:(unsigned int)arg3;
- (void)reloadRowsAtIndexPaths:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)moveSection:(int)arg1 toSection:(int)arg2 withAnimationOptions:(unsigned int)arg3;
- (void)reloadSections:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)deleteSections:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)insertSections:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)performEditCommandWithBlock:(CDUnknownBlockType)arg1;
- (void)endUpdatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)_populateFromEntireDataSourceWithMutableNodes:(id)arg1 mutableIndexPaths:(id)arg2;
- (void)_populateFromDataSourceWithSectionIndexSet:(id)arg1 mutableNodes:(id)arg2 mutableIndexPaths:(id)arg3;
- (void)accessDataSourceWithBlock:(CDUnknownBlockType)arg1;
- (void)reloadDataWithAnimationOptions:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initialDataLoadingWithAnimationOptions:(unsigned int)arg1;
- (void)_deleteSectionsAtIndexSet:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)_insertSections:(id)arg1 atIndexSet:(id)arg2 withAnimationOptions:(unsigned int)arg3;
- (void)_deleteNodesAtIndexPaths:(id)arg1 withAnimationOptions:(unsigned int)arg2;
- (void)_insertNodes:(id)arg1 atIndexPaths:(id)arg2 withAnimationOptions:(unsigned int)arg3;
- (void)_batchLayoutNodes:(id)arg1 atIndexPaths:(id)arg2 withAnimationOptions:(unsigned int)arg3;
- (void)_layoutNodes:(id)arg1 atIndexPaths:(id)arg2 withAnimationOptions:(unsigned int)arg3;
- (id)initWithAsyncDataFetching:(BOOL)arg1;

@end
