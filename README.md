# tempered-assembly

Geometry kernel and renderer for Tempered, compiled to WebAssembly. Manually
written (not AI-assisted) — kept as a separate repo from `tempered-ui` for
that reason.

## Layout

- `kernel/` — BREP kernel. Currently evaluating OCCT vs. Truck for the
  boolean/fillet/inset operations the toolset needs; `kernel/spike-occt/`
  and `kernel/spike-truck/` hold the prototype spike comparing the two on a
  handful of representative cut/extrude/boolean cases before committing to
  one.
- `renderer/` — consumes kernel geometry for display.

## Consumption

`tempered-ui` depends on a versioned build of this package rather than on
this repo's source directly.
