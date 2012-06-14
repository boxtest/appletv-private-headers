/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSURL.h> // Unknown library


@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x35eb7edd
+ (id)escapedStringForString:(id)string;	// 0x35eb8045
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x35eb8085
+ (id)unescapedStringForString:(id)string;	// 0x35eb8181
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x35eb81cd
- (void)enumerateQueryWithBlock:(id)block;	// 0x35eb8935
- (BOOL)isSafeExternalURL;	// 0x35eb8509
- (id)schemeSwizzledURL;	// 0x35eb86b1
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x35eb88a9
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x35eb8209
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x35ec13c5
@end
