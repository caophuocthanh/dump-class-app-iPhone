//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPagingResponse.h"

@class Collection, ImageResource, NSMutableArray, Photo, User;

@interface CustomListsResponse : CloudPagingResponse
{
    NSMutableArray *listsArray;
    Collection *currentList;
    NSMutableArray *imageResourceList;
    ImageResource *imageResource;
    Photo *currentPhoto;
    User *currentUser;
}

@property(retain, nonatomic) User *currentUser; // @synthesize currentUser;
@property(retain, nonatomic) Photo *currentPhoto; // @synthesize currentPhoto;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList;
@property(retain, nonatomic) Collection *currentList; // @synthesize currentList;
@property(retain, nonatomic) NSMutableArray *listsArray; // @synthesize listsArray;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedCustomLists;
- (id)init;

@end

