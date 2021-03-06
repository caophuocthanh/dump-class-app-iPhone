//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailAbstractSmartMailComponent.h"

#import "JBTISmartMailProtoBasedComponent.h"
#import "JBTLodgingReservation.h"

@class ComGoogleCommonBaseOptional, JBTCCachedValue, JBTISmartMailGenericSmartMailHelper, JCSLodgingReservation, NSString;

@interface JBTISmartMailLodgingReservationImpl : JBTISmartMailAbstractSmartMailComponent <JBTLodgingReservation, JBTISmartMailProtoBasedComponent>
{
    JCSLodgingReservation *lodgingReservationProto_;
    JBTCCachedValue *address_;
    JBTCCachedValue *checkinTime_;
    JBTCCachedValue *checkoutTime_;
    JBTCCachedValue *image_;
    JBTISmartMailGenericSmartMailHelper *genericSmartMailHelper_;
    ComGoogleCommonBaseOptional *sortingTime_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getFormattedAddress;
+ (id)__annotations_getReservationNumber;
+ (id)__annotations_getImage;
+ (id)__annotations_getPhoneNumber;
+ (id)__annotations_initWithJCSLodgingReservation_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTISmartMailSmartMailComponentContextImpl_withJavaUtilList_withJBTOrganization_withComGoogleCommonBaseOptional__params;
- (void)dealloc;
- (id)getReservationStatusBadge;
- (id)getCollapsedRow;
- (id)getExpandedDetails;
- (id)getNameAndCity;
- (id)getSummaryAddressString;
- (id)getHotelImageOrMapImage;
- (id)getSortTime;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getFormattedAddress;
- (BOOL)usesLegacyTypedSmartmailProto;
- (id)getProto;
- (id)getReservationNumber;
- (id)getReservationStatus;
- (void)addAdditionalActionsWithComGoogleCumulusCommonCollectImmutableList_Builder:(id)arg1;
- (id)getImage;
- (id)getAddress;
- (id)getCheckoutTime;
- (id)getCheckinTime;
- (id)getPhoneNumber;
- (id)getName;
- (id)initWithJCSLodgingReservation:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJavaUtilList:(id)arg5 withJBTOrganization:(id)arg6 withComGoogleCommonBaseOptional:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

