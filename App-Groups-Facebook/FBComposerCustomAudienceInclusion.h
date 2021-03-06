//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerCustomAudienceConfigDelegate.h"

@interface FBComposerCustomAudienceInclusion : NSObject <FBComposerCustomAudienceConfigDelegate>
{
}

- (BOOL)privacySettingIsValidForOverwrite:(id)arg1;
- (id)existingIDsFromSeedPrivacySetting:(id)arg1;
- (id)privacySettingForSelectedIndividuals:(id)arg1 selectedLists:(id)arg2 graphQLIDMap:(id)arg3 seedPrivacySetting:(id)arg4;
- (BOOL)_isFriendListFromSelectedIndividuals:(id)arg1 selectedLists:(id)arg2;
- (id)descriptionForSelectedIndividuals:(id)arg1 selectedLists:(id)arg2 graphQLIDMap:(id)arg3;
- (id)tintColorForConfiguration;
- (BOOL)showPrimaryTokenizer;
- (id)titleForSecondaryTokenizer;
- (id)titleForConfiguration;
- (id)checkedImageForCell;
- (id)defaultImageForCell;
- (unsigned int)configType;

@end

