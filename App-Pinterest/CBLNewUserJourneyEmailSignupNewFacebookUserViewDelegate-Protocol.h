//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLNewUserJourneyEmailSignupNewFacebookUserView;

@protocol CBLNewUserJourneyEmailSignupNewFacebookUserViewDelegate <NSObject>
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserViewDidTapTerms:(CBLNewUserJourneyEmailSignupNewFacebookUserView *)arg1;
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserViewDidTapPrivacy:(CBLNewUserJourneyEmailSignupNewFacebookUserView *)arg1;
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserView:(CBLNewUserJourneyEmailSignupNewFacebookUserView *)arg1 requestFacebookPublishPermissionsWithCompletion:(void (^)(BOOL))arg2;
- (void)CBLNewUserJourneyEmailSignupNewFacebookUserViewDidTapCreate:(CBLNewUserJourneyEmailSignupNewFacebookUserView *)arg1;
@end
