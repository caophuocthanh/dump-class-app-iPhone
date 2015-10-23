//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPagingResponse.h"

@class Event, ImageResource, NSMutableArray, Photo, Restaurant;

@interface EventListWithTypeResponse : CloudPagingResponse
{
    Event *currentEvent;
    NSMutableArray *eventList;
    Restaurant *currentRes;
    NSMutableArray *currentList;
    NSMutableArray *imageResourceList;
    ImageResource *imageResource;
    Photo *currentPhoto;
}

@property(retain, nonatomic) Photo *currentPhoto; // @synthesize currentPhoto;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList;
@property(retain, nonatomic) NSMutableArray *currentList; // @synthesize currentList;
@property(retain, nonatomic) Restaurant *currentRes; // @synthesize currentRes;
@property(retain, nonatomic) NSMutableArray *eventList; // @synthesize eventList;
@property(retain, nonatomic) Event *currentEvent; // @synthesize currentEvent;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)foundCDATA:(id)arg1 onPath:(id)arg2;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponseEventList;
- (id)init;

@end
