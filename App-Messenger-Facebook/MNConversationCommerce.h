//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMImageUrlCollection, NSString;

@interface MNConversationCommerce : FBValueObject <NSCopying>
{
    BOOL _hasMessenger;
    NSString *_pageId;
    NSString *_name;
    FBMImageUrlCollection *_imageUrls;
}

@property(readonly, copy, nonatomic) FBMImageUrlCollection *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(readonly, nonatomic) BOOL hasMessenger; // @synthesize hasMessenger=_hasMessenger;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (id)initWithPageId:(id)arg1 name:(id)arg2 hasMessenger:(BOOL)arg3 imageUrls:(id)arg4;

@end

