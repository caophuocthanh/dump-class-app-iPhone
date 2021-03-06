//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

@class QTMCollectionViewStyleController;

@interface QTMCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    BOOL _editing;
    unsigned int _cellStateMask;
    unsigned int _sectionOrdinalPosition;
    int _scrollDirection;
    QTMCollectionViewStyleController *_styleController;
    double _animateCellsOnAppearanceDelay;
}

@property(nonatomic) double animateCellsOnAppearanceDelay; // @synthesize animateCellsOnAppearanceDelay=_animateCellsOnAppearanceDelay;
@property(retain, nonatomic) QTMCollectionViewStyleController *styleController; // @synthesize styleController=_styleController;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) unsigned int sectionOrdinalPosition; // @synthesize sectionOrdinalPosition=_sectionOrdinalPosition;
@property(nonatomic) unsigned int cellStateMask; // @synthesize cellStateMask=_cellStateMask;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (unsigned int)elementKind;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

