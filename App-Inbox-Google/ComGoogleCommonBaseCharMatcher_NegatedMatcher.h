//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonBaseCharMatcher.h"

@interface ComGoogleCommonBaseCharMatcher_NegatedMatcher : ComGoogleCommonBaseCharMatcher
{
    ComGoogleCommonBaseCharMatcher *original_;
}

- (void)dealloc;
- (id)withToStringWithNSString:(id)arg1;
- (id)negate;
- (void)setBitsWithJavaUtilBitSet:(id)arg1;
- (int)countInWithJavaLangCharSequence:(id)arg1;
- (BOOL)matchesNoneOfWithJavaLangCharSequence:(id)arg1;
- (BOOL)matchesAllOfWithJavaLangCharSequence:(id)arg1;
- (BOOL)matchesWithChar:(unsigned short)arg1;
- (id)initWithComGoogleCommonBaseCharMatcher:(id)arg1;
- (id)initWithNSString:(id)arg1 withComGoogleCommonBaseCharMatcher:(id)arg2;

@end

