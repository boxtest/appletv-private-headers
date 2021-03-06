/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CPColorPalettizer : NSObject {
	tagOctree *m_pTree;	// 4 = 0x4
	bool isDefaultPaletteSize;	// 8 = 0x8
}
- (id)initWitDefaultPaletteSize;	// 0x349f8985
- (id)initWitMaxPaletteSize:(unsigned)size;	// 0x349f891d
- (int)addPixelToOctree:(tagOctree *)octree pixel:(tagRgbQuad)pixel;	// 0x349f9329
- (bool)addQuadColor:(tagRgbQuad)color;	// 0x349f8b0d
- (bool)addTSUColor:(id)color;	// 0x349f8a39
- (int)createNodeOctree:(tagOctreeNode **)octree parent:(tagOctreeNode *)parent;	// 0x349f9285
- (int)createOctree:(tagOctree **)octree maxPaletteSize:(unsigned short)size;	// 0x349f9171
- (void)createPalette;	// 0x349f8bc5
- (void)dealloc;	// 0x349f89e9
- (int)deleteListOctree:(tagLevelItem *)octree;	// 0x349f92fd
- (int)deleteNodeOctree:(tagOctreeNode *)octree;	// 0x349f92ad
- (int)deleteOctree:(tagOctree *)octree;	// 0x349f9219
- (id)getPaletteData;	// 0x349f8e89
- (id)getPaletteDataRaw;	// 0x349f8c35
- (unsigned short)getPaletteFromOctree:(tagOctreeNode *)octree paletteEntry:(tagRgbQuad *)entry index:(unsigned short)index;	// 0x349f9585
- (id)getPngPaletteData;	// 0x349f8d3d
- (unsigned)paletteColorCount;	// 0x349f8c01
- (int)paletteIndexFromQuadColor:(tagRgbQuad)quadColor;	// 0x349f90dd
- (int)paletteIndexFromTSUColor:(id)tsucolor;	// 0x349f8ffd
- (int)reduceOctree:(tagOctree *)octree;	// 0x349f9441
- (int)rgbToIndexOctree:(tagOctree *)indexOctree source:(tagRgbQuad)source destination:(char *)destination;	// 0x349f9629
@end

