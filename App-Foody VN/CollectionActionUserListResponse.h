//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPagingResponse.h"

@class ImageResource, NSMutableArray, Photo, User;

@interface CollectionActionUserListResponse : CloudPagingResponse
{
    NSMutableArray *_imageResourceList;
    ImageResource *_imageResource;
    NSMutableArray *_photoAlbumList;
    Photo *_currentPhoto;
    NSMutableArray *_currentUserActionList;
    User *_currentUser;
}

@property(retain, nonatomic) User *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) NSMutableArray *currentUserActionList; // @synthesize currentUserActionList=_currentUserActionList;
@property(retain, nonatomic) Photo *currentPhoto; // @synthesize currentPhoto=_currentPhoto;
@property(retain, nonatomic) NSMutableArray *photoAlbumList; // @synthesize photoAlbumList=_photoAlbumList;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList=_imageResourceList;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedActionUserList;
- (id)init;

@end

