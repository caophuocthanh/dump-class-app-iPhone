//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSAssignedId, JCSImage, JCSLodgingReservation_TypeEnum, JCSOrganization, JCSReservationStatusEnum, JCSTime, NSString;

@protocol JCSLodgingReservationOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getReservationNumber;
- (BOOL)hasReservationNumber;
- (JCSReservationStatusEnum *)getReservationStatus;
- (BOOL)hasReservationStatus;
- (JCSImage *)getImage;
- (BOOL)hasImage;
- (JCSTime *)getCheckoutDate;
- (BOOL)hasCheckoutDate;
- (JCSTime *)getCheckinDate;
- (BOOL)hasCheckinDate;
- (JCSOrganization *)getLodging;
- (BOOL)hasLodging;
- (JCSLodgingReservation_TypeEnum *)getType;
- (BOOL)hasType;
- (JCSAssignedId *)getAssignedId;
- (BOOL)hasAssignedId;
@end

