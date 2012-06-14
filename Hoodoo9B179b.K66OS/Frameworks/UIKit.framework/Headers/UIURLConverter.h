/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface UIURLConverter : NSObject {
@private
	NSArray *_hostPatterns;	// 4 = 0x4
	NSArray *_hostSuffixWhiteList;	// 8 = 0x8
	NSArray *_pathPatterns;	// 12 = 0xc
	NSDictionary *_schemeMapping;	// 16 = 0x10
}
- (id)initWithURLConverterDictionary:(id)urlconverterDictionary;	// 0x330068fd
- (BOOL)_URLMatchesHostSuffixWhiteList:(id)list;	// 0x33006b95
- (BOOL)_URLMatchesPatterns:(id)patterns;	// 0x3300b7c9
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x3300b899
- (id)convertedURLForURL:(id)url;	// 0x33006a99
- (void)dealloc;	// 0x330e5695
- (void)setHostPatternStrings:(id)strings;	// 0x330e571d
- (void)setHostSuffixWhiteList:(id)list;	// 0x330e5751
- (void)setPathPatternStrings:(id)strings;	// 0x330e5795
- (void)setSchemeMapping:(id)mapping;	// 0x330e57c9
@end
