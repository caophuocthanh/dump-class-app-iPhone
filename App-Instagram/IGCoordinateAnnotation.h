//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class CLLocation, NSString;

@interface IGCoordinateAnnotation : NSObject <MKAnnotation>
{
    CLLocation *_clLocation;
}

+ (id)annotationWithCLLocation:(id)arg1;
@property(retain, nonatomic) CLLocation *clLocation; // @synthesize clLocation=_clLocation;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

