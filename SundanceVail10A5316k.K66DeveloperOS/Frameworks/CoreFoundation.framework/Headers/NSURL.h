/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NSURL : NSObject <NSSecureCoding, NSCopying> {
	NSString *_urlString;	// 4 = 0x4
	NSURL *_baseURL;	// 8 = 0x8
	void *_clients;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (id)URLByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x37151305
+ (id)bookmarkDataWithContentsOfURL:(id)url error:(id *)error;	// 0x371513e1
+ (id)resourceValuesForKeys:(id)keys fromBookmarkData:(id)bookmarkData;	// 0x37151371
+ (BOOL)supportsSecureCoding;	// 0x37150e05
+ (BOOL)writeBookmarkData:(id)data toURL:(id)url options:(unsigned)options error:(id *)error;	// 0x371513a9
- (id)initByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x37151115
- (id)bookmarkDataWithAliasRecord:(id)aliasRecord;	// 0x37151429
- (id)bookmarkDataWithOptions:(unsigned)options includingResourceValuesForKeys:(id)keys relativeToURL:(id)url error:(id *)error;	// 0x37151091
- (BOOL)checkResourceIsReachableAndReturnError:(id *)error;	// 0x37150f25
- (id)filePathURL;	// 0x37150ff9
- (id)fileReferenceURL;	// 0x37150f79
- (BOOL)getResourceValue:(out id *)value forKey:(id)key error:(out id *)error;	// 0x370d362d
- (BOOL)isFileReferenceURL;	// 0x370cff65
- (id)resourceValuesForKeys:(id)keys error:(id *)error;	// 0x37150e09
- (BOOL)setResourceValue:(id)value forKey:(id)key error:(id *)error;	// 0x37150e61
- (BOOL)setResourceValues:(id)values error:(id *)error;	// 0x37150ecd
@end
