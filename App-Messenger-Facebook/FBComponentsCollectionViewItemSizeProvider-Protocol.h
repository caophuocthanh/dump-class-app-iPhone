//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@protocol FBComponentsCollectionViewItemSizeProvider <NSObject>
- (void)enumerateLayoutsForItemsUsingBlock:(void (^)(NSIndexPath *, struct CKComponentLayout *, struct CGRect, char *))arg1;
- (void)enumerateSizesforItemsUsingBlock:(void (^)(NSIndexPath *, struct CGSize, char *))arg1;
- (struct CGSize)sizeForItemAtIndexPath:(NSIndexPath *)arg1;
@end
