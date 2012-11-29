/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, UINibDecoder, NSData, NSBundle;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject {
	NSString *bundleResourceName;	// 4 = 0x4
	NSString *bundleDirectoryName;	// 8 = 0x8
	NSBundle *bundle;	// 12 = 0xc
	NSString *identifierForStringsFile;	// 16 = 0x10
	NSData *archiveData;	// 20 = 0x14
	UINibDecoder *nibDecoder;	// 24 = 0x18
	BOOL instantiatingForSimulator;	// 28 = 0x1c
	BOOL captureImplicitLoadingContextOnDecode;	// 29 = 0x1d
}
@property(copy, nonatomic) NSData *archiveData;	// G=0x31d6fafd; S=0x31d6fb11; @synthesize
@property(retain, nonatomic) NSBundle *bundle;	// G=0x31d6f671; S=0x31d6ed61; @synthesize
@property(copy, nonatomic) NSString *bundleDirectoryName;	// G=0x31d6f615; S=0x31d6ed81; @synthesize
@property(copy, nonatomic) NSString *bundleResourceName;	// G=0x31d6ee19; S=0x31d6ed71; @synthesize
@property(assign) BOOL captureImplicitLoadingContextOnDecode;	// G=0x31e5ae75; S=0x31e5ae8d; @synthesize
@property(copy, nonatomic) NSString *identifierForStringsFile;	// G=0x31d6f519; S=0x31e5ae55; @synthesize
@property(assign, nonatomic) BOOL instantiatingForSimulator;	// G=0x31d75f95; S=0x31e5ae65; @synthesize
@property(retain, nonatomic) UINibDecoder *nibDecoder;	// G=0x31d6f96d; S=0x31d70e75; @synthesize
// declared property getter: - (id)archiveData;	// 0x31d6fafd
// declared property getter: - (id)bundle;	// 0x31d6f671
// declared property getter: - (id)bundleDirectoryName;	// 0x31d6f615
// declared property getter: - (id)bundleResourceName;	// 0x31d6ee19
// declared property getter: - (BOOL)captureImplicitLoadingContextOnDecode;	// 0x31e5ae75
- (void)dealloc;	// 0x31d76859
// declared property getter: - (id)identifierForStringsFile;	// 0x31d6f519
// declared property getter: - (BOOL)instantiatingForSimulator;	// 0x31d75f95
// declared property getter: - (id)nibDecoder;	// 0x31d6f96d
// declared property setter: - (void)setArchiveData:(id)data;	// 0x31d6fb11
// declared property setter: - (void)setBundle:(id)bundle;	// 0x31d6ed61
// declared property setter: - (void)setBundleDirectoryName:(id)name;	// 0x31d6ed81
// declared property setter: - (void)setBundleResourceName:(id)name;	// 0x31d6ed71
// declared property setter: - (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)decode;	// 0x31e5ae8d
// declared property setter: - (void)setIdentifierForStringsFile:(id)stringsFile;	// 0x31e5ae55
// declared property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x31e5ae65
// declared property setter: - (void)setNibDecoder:(id)decoder;	// 0x31d70e75
@end
