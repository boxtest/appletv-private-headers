/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (CaseInsenitiveString)
- (id)objectForCaseInsensitiveString:(id)caseInsensitiveString;	// 0x328abe19
@end

@interface NSDictionary (BRDictionaryAdditions)
+ (id)dictionaryOfLocalizedRUIData;	// 0x329581e5
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary;	// 0x32957ced
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary cachePolicy:(unsigned)policy;	// 0x32957fa9
- (id)URLQueryString;	// 0x32957c89
- (id)URLQueryStringWithKeyOrder:(id)keyOrder;	// 0x32957db1
- (void)__purgeCachedLocalizedData:(id)data;	// 0x32957ca1
- (id)deepCopy;	// 0x32957d95
- (id)deepMutableCopy;	// 0x32957d79
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x32957d11
@end
