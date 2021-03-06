//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CBLAdditions)
+ (id)pinterestLocaleString;
+ (id)randomAlphanumericStringOfLength:(int)arg1;
+ (id)pluralizedStringForString:(id)arg1 pluralString:(id)arg2 count:(float)arg3;
+ (id)listStringForTextArray:(id)arg1 maxCount:(int)arg2;
+ (id)UUIDString;
+ (id)queryStringWithParameters:(id)arg1;
+ (void)load;
- (void)drawWithRect:(struct CGRect)arg1 withFont:(id)arg2 andColor:(id)arg3 onOneLine:(BOOL)arg4;
- (struct CGSize)sizeWithAttributesFromFont:(id)arg1;
- (struct CGSize)sizeStringWithFont:(id)arg1 alignment:(int)arg2 constrainedToSize:(struct CGSize)arg3;
- (struct CGSize)sizeStringWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct _NSRange)rangeForEntireString;
- (id)capitalizedFirstLetter;
- (id)hashTagTextCheckingResults;
- (id)HTMLTags;
- (unsigned int)highVariabilityHash;
- (id)validatedURLString;
- (id)extractHTTPURLs;
- (BOOL)isValidEmail;
- (BOOL)isValidURL;
- (id)htmlEscapedString;
- (id)urlDecodedString;
- (id)urlEncodedString;
- (id)RFC3986EncodedString;
- (id)MD5;
- (id)base64EncodedSHA1HashWithKey:(id)arg1;
- (id)stringByAppendingURLPathComponent:(id)arg1;
- (id)formatPhoneNumber;
- (id)trimWhitespaceAndNewlines;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)parametersFromQueryStringByDecodingValue:(BOOL)arg1;
- (id)parametersFromQueryString;
- (BOOL)patched_containsString:(id)arg1;
@end

