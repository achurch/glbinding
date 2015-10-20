#include <glbinding/Binding.h>

#include <glbinding/gl/bitfield.h>
#include <glbinding/gl/boolean.h>
#include <glbinding/gl/enum.h>
#include <glbinding/gl/values.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding 
{

Function<void, GLenum> Binding::MakeBufferNonResidentNV("glMakeBufferNonResidentNV");
Function<void, GLenum, GLenum> Binding::MakeBufferResidentNV("glMakeBufferResidentNV");
Function<void, GLuint64> Binding::MakeImageHandleNonResidentARB("glMakeImageHandleNonResidentARB");
Function<void, GLuint64> Binding::MakeImageHandleNonResidentNV("glMakeImageHandleNonResidentNV");
Function<void, GLuint64, GLenum> Binding::MakeImageHandleResidentARB("glMakeImageHandleResidentARB");
Function<void, GLuint64, GLenum> Binding::MakeImageHandleResidentNV("glMakeImageHandleResidentNV");
Function<void, GLuint> Binding::MakeNamedBufferNonResidentNV("glMakeNamedBufferNonResidentNV");
Function<void, GLuint, GLenum> Binding::MakeNamedBufferResidentNV("glMakeNamedBufferResidentNV");
Function<void, GLuint64> Binding::MakeTextureHandleNonResidentARB("glMakeTextureHandleNonResidentARB");
Function<void, GLuint64> Binding::MakeTextureHandleNonResidentNV("glMakeTextureHandleNonResidentNV");
Function<void, GLuint64> Binding::MakeTextureHandleResidentARB("glMakeTextureHandleResidentARB");
Function<void, GLuint64> Binding::MakeTextureHandleResidentNV("glMakeTextureHandleResidentNV");
Function<void, GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::Map1d("glMap1d");
Function<void, GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::Map1f("glMap1f");
Function<void, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed> Binding::Map1xOES("glMap1xOES");
Function<void, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::Map2d("glMap2d");
Function<void, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::Map2f("glMap2f");
Function<void, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, GLfixed> Binding::Map2xOES("glMap2xOES");
Function<void *, GLenum, GLenum> Binding::MapBuffer("glMapBuffer");
Function<void *, GLenum, GLenum> Binding::MapBufferARB("glMapBufferARB");
Function<void *, GLenum, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapBufferRange("glMapBufferRange");
Function<void, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const void *> Binding::MapControlPointsNV("glMapControlPointsNV");
Function<void, GLint, GLdouble, GLdouble> Binding::MapGrid1d("glMapGrid1d");
Function<void, GLint, GLfloat, GLfloat> Binding::MapGrid1f("glMapGrid1f");
Function<void, GLint, GLfixed, GLfixed> Binding::MapGrid1xOES("glMapGrid1xOES");
Function<void, GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble> Binding::MapGrid2d("glMapGrid2d");
Function<void, GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat> Binding::MapGrid2f("glMapGrid2f");
Function<void, GLint, GLfixed, GLfixed, GLfixed, GLfixed> Binding::MapGrid2xOES("glMapGrid2xOES");
Function<void *, GLuint, GLenum> Binding::MapNamedBuffer("glMapNamedBuffer");
Function<void *, GLuint, GLenum> Binding::MapNamedBufferEXT("glMapNamedBufferEXT");
Function<void *, GLuint, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapNamedBufferRange("glMapNamedBufferRange");
Function<void *, GLuint, GLintptr, GLsizeiptr, BufferAccessMask> Binding::MapNamedBufferRangeEXT("glMapNamedBufferRangeEXT");
Function<void *, GLuint> Binding::MapObjectBufferATI("glMapObjectBufferATI");
Function<void, GLenum, GLenum, const GLfloat *> Binding::MapParameterfvNV("glMapParameterfvNV");
Function<void, GLenum, GLenum, const GLint *> Binding::MapParameterivNV("glMapParameterivNV");
Function<void *, GLuint, GLint, MapBufferUsageMask, GLint *, GLenum *> Binding::MapTexture2DINTEL("glMapTexture2DINTEL");
Function<void, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::MapVertexAttrib1dAPPLE("glMapVertexAttrib1dAPPLE");
Function<void, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::MapVertexAttrib1fAPPLE("glMapVertexAttrib1fAPPLE");
Function<void, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *> Binding::MapVertexAttrib2dAPPLE("glMapVertexAttrib2dAPPLE");
Function<void, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *> Binding::MapVertexAttrib2fAPPLE("glMapVertexAttrib2fAPPLE");
Function<void, GLenum, GLenum, GLfloat> Binding::Materialf("glMaterialf");
Function<void, GLenum, GLenum, const GLfloat *> Binding::Materialfv("glMaterialfv");
Function<void, GLenum, GLenum, GLint> Binding::Materiali("glMateriali");
Function<void, GLenum, GLenum, const GLint *> Binding::Materialiv("glMaterialiv");
Function<void, GLenum, GLenum, GLfixed> Binding::MaterialxOES("glMaterialxOES");
Function<void, GLenum, GLenum, const GLfixed *> Binding::MaterialxvOES("glMaterialxvOES");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixFrustumEXT("glMatrixFrustumEXT");
Function<void, GLint, GLenum, GLsizei, const void *> Binding::MatrixIndexPointerARB("glMatrixIndexPointerARB");
Function<void, GLint, const GLubyte *> Binding::MatrixIndexubvARB("glMatrixIndexubvARB");
Function<void, GLint, const GLuint *> Binding::MatrixIndexuivARB("glMatrixIndexuivARB");
Function<void, GLint, const GLushort *> Binding::MatrixIndexusvARB("glMatrixIndexusvARB");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoad3x2fNV("glMatrixLoad3x2fNV");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoad3x3fNV("glMatrixLoad3x3fNV");
Function<void, GLenum> Binding::MatrixLoadIdentityEXT("glMatrixLoadIdentityEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoadTranspose3x3fNV("glMatrixLoadTranspose3x3fNV");
Function<void, GLenum, const GLdouble *> Binding::MatrixLoadTransposedEXT("glMatrixLoadTransposedEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoadTransposefEXT("glMatrixLoadTransposefEXT");
Function<void, GLenum, const GLdouble *> Binding::MatrixLoaddEXT("glMatrixLoaddEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixLoadfEXT("glMatrixLoadfEXT");
Function<void, GLenum> Binding::MatrixMode("glMatrixMode");
Function<void, GLenum, const GLfloat *> Binding::MatrixMult3x2fNV("glMatrixMult3x2fNV");
Function<void, GLenum, const GLfloat *> Binding::MatrixMult3x3fNV("glMatrixMult3x3fNV");
Function<void, GLenum, const GLfloat *> Binding::MatrixMultTranspose3x3fNV("glMatrixMultTranspose3x3fNV");
Function<void, GLenum, const GLdouble *> Binding::MatrixMultTransposedEXT("glMatrixMultTransposedEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixMultTransposefEXT("glMatrixMultTransposefEXT");
Function<void, GLenum, const GLdouble *> Binding::MatrixMultdEXT("glMatrixMultdEXT");
Function<void, GLenum, const GLfloat *> Binding::MatrixMultfEXT("glMatrixMultfEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixOrthoEXT("glMatrixOrthoEXT");
Function<void, GLenum> Binding::MatrixPopEXT("glMatrixPopEXT");
Function<void, GLenum> Binding::MatrixPushEXT("glMatrixPushEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MatrixRotatedEXT("glMatrixRotatedEXT");
Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MatrixRotatefEXT("glMatrixRotatefEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixScaledEXT("glMatrixScaledEXT");
Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixScalefEXT("glMatrixScalefEXT");
Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MatrixTranslatedEXT("glMatrixTranslatedEXT");
Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MatrixTranslatefEXT("glMatrixTranslatefEXT");
Function<void, GLuint> Binding::MaxShaderCompilerThreadsARB("glMaxShaderCompilerThreadsARB");
Function<void, MemoryBarrierMask> Binding::MemoryBarrier("glMemoryBarrier");
Function<void, MemoryBarrierMask> Binding::MemoryBarrierByRegion("glMemoryBarrierByRegion");
Function<void, MemoryBarrierMask> Binding::MemoryBarrierEXT("glMemoryBarrierEXT");
Function<void, GLfloat> Binding::MinSampleShading("glMinSampleShading");
Function<void, GLfloat> Binding::MinSampleShadingARB("glMinSampleShadingARB");
Function<void, GLenum, GLenum, GLboolean> Binding::Minmax("glMinmax");
Function<void, GLenum, GLenum, GLboolean> Binding::MinmaxEXT("glMinmaxEXT");
Function<void, const GLdouble *> Binding::MultMatrixd("glMultMatrixd");
Function<void, const GLfloat *> Binding::MultMatrixf("glMultMatrixf");
Function<void, const GLfixed *> Binding::MultMatrixxOES("glMultMatrixxOES");
Function<void, const GLdouble *> Binding::MultTransposeMatrixd("glMultTransposeMatrixd");
Function<void, const GLdouble *> Binding::MultTransposeMatrixdARB("glMultTransposeMatrixdARB");
Function<void, const GLfloat *> Binding::MultTransposeMatrixf("glMultTransposeMatrixf");
Function<void, const GLfloat *> Binding::MultTransposeMatrixfARB("glMultTransposeMatrixfARB");
Function<void, const GLfixed *> Binding::MultTransposeMatrixxOES("glMultTransposeMatrixxOES");
Function<void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArrays("glMultiDrawArrays");
Function<void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawArraysEXT("glMultiDrawArraysEXT");
Function<void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirect("glMultiDrawArraysIndirect");
Function<void, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectAMD("glMultiDrawArraysIndirectAMD");
Function<void, GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint> Binding::MultiDrawArraysIndirectBindlessCountNV("glMultiDrawArraysIndirectBindlessCountNV");
Function<void, GLenum, const void *, GLsizei, GLsizei, GLint> Binding::MultiDrawArraysIndirectBindlessNV("glMultiDrawArraysIndirectBindlessNV");
Function<void, GLenum, GLintptr, GLintptr, GLsizei, GLsizei> Binding::MultiDrawArraysIndirectCountARB("glMultiDrawArraysIndirectCountARB");
Function<void, GLenum, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawElementArrayAPPLE("glMultiDrawElementArrayAPPLE");
Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElements("glMultiDrawElements");
Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *> Binding::MultiDrawElementsBaseVertex("glMultiDrawElementsBaseVertex");
Function<void, GLenum, const GLsizei *, GLenum, const void *const*, GLsizei> Binding::MultiDrawElementsEXT("glMultiDrawElementsEXT");
Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirect("glMultiDrawElementsIndirect");
Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectAMD("glMultiDrawElementsIndirectAMD");
Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei, GLsizei, GLint> Binding::MultiDrawElementsIndirectBindlessCountNV("glMultiDrawElementsIndirectBindlessCountNV");
Function<void, GLenum, GLenum, const void *, GLsizei, GLsizei, GLint> Binding::MultiDrawElementsIndirectBindlessNV("glMultiDrawElementsIndirectBindlessNV");
Function<void, GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei> Binding::MultiDrawElementsIndirectCountARB("glMultiDrawElementsIndirectCountARB");
Function<void, GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei> Binding::MultiDrawRangeElementArrayAPPLE("glMultiDrawRangeElementArrayAPPLE");
Function<void, const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint> Binding::MultiModeDrawArraysIBM("glMultiModeDrawArraysIBM");
Function<void, const GLenum *, const GLsizei *, GLenum, const void *const*, GLsizei, GLint> Binding::MultiModeDrawElementsIBM("glMultiModeDrawElementsIBM");
Function<void, GLenum, GLenum, GLenum, GLuint> Binding::MultiTexBufferEXT("glMultiTexBufferEXT");
Function<void, GLenum, GLbyte> Binding::MultiTexCoord1bOES("glMultiTexCoord1bOES");
Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord1bvOES("glMultiTexCoord1bvOES");
Function<void, GLenum, GLdouble> Binding::MultiTexCoord1d("glMultiTexCoord1d");
Function<void, GLenum, GLdouble> Binding::MultiTexCoord1dARB("glMultiTexCoord1dARB");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord1dv("glMultiTexCoord1dv");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord1dvARB("glMultiTexCoord1dvARB");
Function<void, GLenum, GLfloat> Binding::MultiTexCoord1f("glMultiTexCoord1f");
Function<void, GLenum, GLfloat> Binding::MultiTexCoord1fARB("glMultiTexCoord1fARB");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord1fv("glMultiTexCoord1fv");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord1fvARB("glMultiTexCoord1fvARB");
Function<void, GLenum, GLhalfNV> Binding::MultiTexCoord1hNV("glMultiTexCoord1hNV");
Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord1hvNV("glMultiTexCoord1hvNV");
Function<void, GLenum, GLint> Binding::MultiTexCoord1i("glMultiTexCoord1i");
Function<void, GLenum, GLint> Binding::MultiTexCoord1iARB("glMultiTexCoord1iARB");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord1iv("glMultiTexCoord1iv");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord1ivARB("glMultiTexCoord1ivARB");
Function<void, GLenum, GLshort> Binding::MultiTexCoord1s("glMultiTexCoord1s");
Function<void, GLenum, GLshort> Binding::MultiTexCoord1sARB("glMultiTexCoord1sARB");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord1sv("glMultiTexCoord1sv");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord1svARB("glMultiTexCoord1svARB");
Function<void, GLenum, GLfixed> Binding::MultiTexCoord1xOES("glMultiTexCoord1xOES");
Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord1xvOES("glMultiTexCoord1xvOES");
Function<void, GLenum, GLbyte, GLbyte> Binding::MultiTexCoord2bOES("glMultiTexCoord2bOES");
Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord2bvOES("glMultiTexCoord2bvOES");
Function<void, GLenum, GLdouble, GLdouble> Binding::MultiTexCoord2d("glMultiTexCoord2d");
Function<void, GLenum, GLdouble, GLdouble> Binding::MultiTexCoord2dARB("glMultiTexCoord2dARB");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord2dv("glMultiTexCoord2dv");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord2dvARB("glMultiTexCoord2dvARB");
Function<void, GLenum, GLfloat, GLfloat> Binding::MultiTexCoord2f("glMultiTexCoord2f");
Function<void, GLenum, GLfloat, GLfloat> Binding::MultiTexCoord2fARB("glMultiTexCoord2fARB");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord2fv("glMultiTexCoord2fv");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord2fvARB("glMultiTexCoord2fvARB");
Function<void, GLenum, GLhalfNV, GLhalfNV> Binding::MultiTexCoord2hNV("glMultiTexCoord2hNV");
Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord2hvNV("glMultiTexCoord2hvNV");
Function<void, GLenum, GLint, GLint> Binding::MultiTexCoord2i("glMultiTexCoord2i");
Function<void, GLenum, GLint, GLint> Binding::MultiTexCoord2iARB("glMultiTexCoord2iARB");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord2iv("glMultiTexCoord2iv");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord2ivARB("glMultiTexCoord2ivARB");
Function<void, GLenum, GLshort, GLshort> Binding::MultiTexCoord2s("glMultiTexCoord2s");
Function<void, GLenum, GLshort, GLshort> Binding::MultiTexCoord2sARB("glMultiTexCoord2sARB");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord2sv("glMultiTexCoord2sv");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord2svARB("glMultiTexCoord2svARB");
Function<void, GLenum, GLfixed, GLfixed> Binding::MultiTexCoord2xOES("glMultiTexCoord2xOES");
Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord2xvOES("glMultiTexCoord2xvOES");
Function<void, GLenum, GLbyte, GLbyte, GLbyte> Binding::MultiTexCoord3bOES("glMultiTexCoord3bOES");
Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord3bvOES("glMultiTexCoord3bvOES");
Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord3d("glMultiTexCoord3d");
Function<void, GLenum, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord3dARB("glMultiTexCoord3dARB");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord3dv("glMultiTexCoord3dv");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord3dvARB("glMultiTexCoord3dvARB");
Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord3f("glMultiTexCoord3f");
Function<void, GLenum, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord3fARB("glMultiTexCoord3fARB");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord3fv("glMultiTexCoord3fv");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord3fvARB("glMultiTexCoord3fvARB");
Function<void, GLenum, GLhalfNV, GLhalfNV, GLhalfNV> Binding::MultiTexCoord3hNV("glMultiTexCoord3hNV");
Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord3hvNV("glMultiTexCoord3hvNV");
Function<void, GLenum, GLint, GLint, GLint> Binding::MultiTexCoord3i("glMultiTexCoord3i");
Function<void, GLenum, GLint, GLint, GLint> Binding::MultiTexCoord3iARB("glMultiTexCoord3iARB");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord3iv("glMultiTexCoord3iv");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord3ivARB("glMultiTexCoord3ivARB");
Function<void, GLenum, GLshort, GLshort, GLshort> Binding::MultiTexCoord3s("glMultiTexCoord3s");
Function<void, GLenum, GLshort, GLshort, GLshort> Binding::MultiTexCoord3sARB("glMultiTexCoord3sARB");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord3sv("glMultiTexCoord3sv");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord3svARB("glMultiTexCoord3svARB");
Function<void, GLenum, GLfixed, GLfixed, GLfixed> Binding::MultiTexCoord3xOES("glMultiTexCoord3xOES");
Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord3xvOES("glMultiTexCoord3xvOES");
Function<void, GLenum, GLbyte, GLbyte, GLbyte, GLbyte> Binding::MultiTexCoord4bOES("glMultiTexCoord4bOES");
Function<void, GLenum, const GLbyte *> Binding::MultiTexCoord4bvOES("glMultiTexCoord4bvOES");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord4d("glMultiTexCoord4d");
Function<void, GLenum, GLdouble, GLdouble, GLdouble, GLdouble> Binding::MultiTexCoord4dARB("glMultiTexCoord4dARB");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord4dv("glMultiTexCoord4dv");
Function<void, GLenum, const GLdouble *> Binding::MultiTexCoord4dvARB("glMultiTexCoord4dvARB");
Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord4f("glMultiTexCoord4f");
Function<void, GLenum, GLfloat, GLfloat, GLfloat, GLfloat> Binding::MultiTexCoord4fARB("glMultiTexCoord4fARB");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord4fv("glMultiTexCoord4fv");
Function<void, GLenum, const GLfloat *> Binding::MultiTexCoord4fvARB("glMultiTexCoord4fvARB");
Function<void, GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV> Binding::MultiTexCoord4hNV("glMultiTexCoord4hNV");
Function<void, GLenum, const GLhalfNV *> Binding::MultiTexCoord4hvNV("glMultiTexCoord4hvNV");
Function<void, GLenum, GLint, GLint, GLint, GLint> Binding::MultiTexCoord4i("glMultiTexCoord4i");
Function<void, GLenum, GLint, GLint, GLint, GLint> Binding::MultiTexCoord4iARB("glMultiTexCoord4iARB");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord4iv("glMultiTexCoord4iv");
Function<void, GLenum, const GLint *> Binding::MultiTexCoord4ivARB("glMultiTexCoord4ivARB");
Function<void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::MultiTexCoord4s("glMultiTexCoord4s");
Function<void, GLenum, GLshort, GLshort, GLshort, GLshort> Binding::MultiTexCoord4sARB("glMultiTexCoord4sARB");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord4sv("glMultiTexCoord4sv");
Function<void, GLenum, const GLshort *> Binding::MultiTexCoord4svARB("glMultiTexCoord4svARB");
Function<void, GLenum, GLfixed, GLfixed, GLfixed, GLfixed> Binding::MultiTexCoord4xOES("glMultiTexCoord4xOES");
Function<void, GLenum, const GLfixed *> Binding::MultiTexCoord4xvOES("glMultiTexCoord4xvOES");
Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP1ui("glMultiTexCoordP1ui");
Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP1uiv("glMultiTexCoordP1uiv");
Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP2ui("glMultiTexCoordP2ui");
Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP2uiv("glMultiTexCoordP2uiv");
Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP3ui("glMultiTexCoordP3ui");
Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP3uiv("glMultiTexCoordP3uiv");
Function<void, GLenum, GLenum, GLuint> Binding::MultiTexCoordP4ui("glMultiTexCoordP4ui");
Function<void, GLenum, GLenum, const GLuint *> Binding::MultiTexCoordP4uiv("glMultiTexCoordP4uiv");
Function<void, GLenum, GLint, GLenum, GLsizei, const void *> Binding::MultiTexCoordPointerEXT("glMultiTexCoordPointerEXT");
Function<void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexEnvfEXT("glMultiTexEnvfEXT");
Function<void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexEnvfvEXT("glMultiTexEnvfvEXT");
Function<void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexEnviEXT("glMultiTexEnviEXT");
Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexEnvivEXT("glMultiTexEnvivEXT");
Function<void, GLenum, GLenum, GLenum, GLdouble> Binding::MultiTexGendEXT("glMultiTexGendEXT");
Function<void, GLenum, GLenum, GLenum, const GLdouble *> Binding::MultiTexGendvEXT("glMultiTexGendvEXT");
Function<void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexGenfEXT("glMultiTexGenfEXT");
Function<void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexGenfvEXT("glMultiTexGenfvEXT");
Function<void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexGeniEXT("glMultiTexGeniEXT");
Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexGenivEXT("glMultiTexGenivEXT");
Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage1DEXT("glMultiTexImage1DEXT");
Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage2DEXT("glMultiTexImage2DEXT");
Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *> Binding::MultiTexImage3DEXT("glMultiTexImage3DEXT");
Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexParameterIivEXT("glMultiTexParameterIivEXT");
Function<void, GLenum, GLenum, GLenum, const GLuint *> Binding::MultiTexParameterIuivEXT("glMultiTexParameterIuivEXT");
Function<void, GLenum, GLenum, GLenum, GLfloat> Binding::MultiTexParameterfEXT("glMultiTexParameterfEXT");
Function<void, GLenum, GLenum, GLenum, const GLfloat *> Binding::MultiTexParameterfvEXT("glMultiTexParameterfvEXT");
Function<void, GLenum, GLenum, GLenum, GLint> Binding::MultiTexParameteriEXT("glMultiTexParameteriEXT");
Function<void, GLenum, GLenum, GLenum, const GLint *> Binding::MultiTexParameterivEXT("glMultiTexParameterivEXT");
Function<void, GLenum, GLenum, GLuint> Binding::MultiTexRenderbufferEXT("glMultiTexRenderbufferEXT");
Function<void, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage1DEXT("glMultiTexSubImage1DEXT");
Function<void, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage2DEXT("glMultiTexSubImage2DEXT");
Function<void, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *> Binding::MultiTexSubImage3DEXT("glMultiTexSubImage3DEXT");

} // namespace glbinding
