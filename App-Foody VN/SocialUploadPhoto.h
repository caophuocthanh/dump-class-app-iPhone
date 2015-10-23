//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UploadPhoto.h"

#import "ObjectImageDownloadProtocol.h"

@class NSString;

@interface SocialUploadPhoto : UploadPhoto <ObjectImageDownloadProtocol>
{
    BOOL _photoURLIsInvalid;
    NSString *_imageURL;
}

@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) BOOL photoURLIsInvalid; // @synthesize photoURLIsInvalid=_photoURLIsInvalid;
- (void).cxx_destruct;
- (BOOL)objectImageURLIsValid;
- (void)setObjectImageURLInvalid;
- (id)getObjectImageURLForSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
