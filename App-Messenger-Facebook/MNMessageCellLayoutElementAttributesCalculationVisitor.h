//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageCellLayoutElementVisitor.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString;

@interface MNMessageCellLayoutElementAttributesCalculationVisitor : NSObject <MNMessageCellLayoutElementVisitor>
{
    NSMutableArray *_allLayoutAttributes;
    struct CGRect _cellFrame;
    Class _layoutAttributesClass;
    NSIndexPath *_indexPath;
    struct CGSize _contentSize;
}

@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void).cxx_destruct;
- (void)visitLayoutElements:(id)arg1 atIndexPath:(id)arg2;
- (void)visitRelativeViewLayoutElement:(id)arg1;
- (void)visitBlockViewLayoutElement:(id)arg1;
- (void)visitVerticalSpaceElement:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allLayoutAttributes;
- (id)initWithWithCollectionViewWidth:(float)arg1 layoutAttributesClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
