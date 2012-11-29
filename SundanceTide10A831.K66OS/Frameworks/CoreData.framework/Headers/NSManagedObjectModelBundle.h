/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
	NSBundle *_bundle;	// 4 = 0x4
	NSDictionary *_versionInfoDictionary;	// 8 = 0x8
}
@property(readonly, retain) NSBundle *bundle;	// G=0x33d0b241; converted property
@property(readonly, retain) NSDictionary *versionInfoDictionary;	// G=0x33d0b285; converted property
- (id)initWithPath:(id)path;	// 0x33d0af85
- (id)_modelForVersionHashes:(id)versionHashes;	// 0x33d94849
- (id)_modelForVersionHashes:(id)versionHashes inStyle:(unsigned)style;	// 0x33d94005
// converted property getter: - (id)bundle;	// 0x33d0b241
- (id)currentVersion;	// 0x33d0b251
- (id)currentVersionURL;	// 0x33d0b295
- (void)dealloc;	// 0x33d10175
- (id)modelVersions;	// 0x33d93fdd
- (id)optimizedVersionURL;	// 0x33d0b1cd
- (id)urlForModelVersionWithName:(id)name;	// 0x33d0b2c5
- (id)versionHashInfo;	// 0x33d93fa9
// converted property getter: - (id)versionInfoDictionary;	// 0x33d0b285
@end
